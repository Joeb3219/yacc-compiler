%{
#include <stdio.h>
#include "attr.h"
#include "instrutil.h"
int yylex();
void yyerror(char * s);
#include "symtab.h"

FILE *outfile;
char *CommentBuffer;
 
%}

%union 	{
			tokentype token;
			regInfo targetReg;
			varIDList varIDs;
			labelInfo labelinf;
	   	}

%token PROG PERIOD VAR 
%token INT BOOL PRINT THEN IF DO  
%token ARRAY OF 
%token BEG END ASG  
%token EQ NEQ LT LEQ GT GEQ AND OR TRUE FALSE
%token ELSE
%token WHILE 
%token <token> ID ICONST 

%type <targetReg> exp 
%type <targetReg> lhs 

%type <varIDs> idlist
%type <targetReg> type
%type <targetReg> stype

%type <targetReg> condexp

%type <labelinf> WHILE

%start program

%nonassoc EQ NEQ LT LEQ GT GEQ 
%left '+' '-' AND
%left '*' OR

%nonassoc THEN
%nonassoc ELSE

%%
program : {emitComment("Assign STATIC_AREA_ADDRESS to register \"r0\"");
		   emit(NOLABEL, LOADI, STATIC_AREA_ADDRESS, 0, EMPTY);} 
		   PROG ID ';' block PERIOD { }
	;

block	: variables cmpdstmt { }
	;

variables: /* empty */
	| VAR vardcls { }
	;

vardcls	: vardcls vardcl ';' { }
	| vardcl ';' { }
	| error ';' { yyerror("***Error: illegal variable declaration\n");}  
	;

vardcl	: idlist ':' type 	{ 
								
								int i;
								for(i = 0; i < $1.numIds; i ++){
									int offset = NextOffset(1);
									insert($1.ids[i], $3.type, offset);
								}

								free($1.ids);
							}
	;

idlist	: idlist ',' ID 	{ 
								$$.numIds = $1.numIds + 1;
								$$.ids = malloc(sizeof(char*) * $$.numIds);
								memcpy($$.ids, $1.ids, sizeof(char*) * $1.numIds);
								$$.ids[$$.numIds - 1] = $3.str;
								free($1.ids);
							}
		| ID				{
								$$.numIds = 1;
								$$.ids = malloc(sizeof(char*) * 1);
								$$.ids[0] = $1.str;
							} 
	;


type	: ARRAY '[' ICONST ']' OF stype {  }

		| stype { $$.type = $1.type; }
	;

stype	: INT { $$.type = TYPE_INT; }
		| BOOL { $$.type = TYPE_BOOL; }
	;

stmtlist : stmtlist ';' stmt { }
	| stmt { }
		| error { yyerror("***Error: ';' expected or illegal statement \n");}
	;

stmt    : ifstmt { }
	| wstmt { }
	| astmt { }
	| writestmt { }
	| cmpdstmt { }
	;

cmpdstmt: BEG stmtlist END { }
	;

ifstmt :  ifhead 
		  THEN stmt 
	  ELSE 
		  stmt 
	;

ifhead : IF condexp {  }
		;

writestmt: PRINT '(' exp ')' { int printOffset = -4; /* default location for printing */
							 sprintf(CommentBuffer, "Code for \"PRINT\" from offset %d", printOffset);
							 emitComment(CommentBuffer);
								 emit(NOLABEL, STOREAI, $3.targetRegister, 0, printOffset);
								 emit(NOLABEL, 
									  OUTPUTAI, 
									  0,
									  printOffset, 
									  EMPTY);
							   }
	;

wstmt	: WHILE  	{ 
				
						// First, print the label of where we currently are.
						$1.headLabel = NextLabel();
						$1.successLabel = NextLabel();
						$1.failLabel = NextLabel();

						sprintf(CommentBuffer, "WHILE STATEMENT #%d", $1.headLabel);
						emitComment(CommentBuffer);
						emit($1.headLabel, NOP, 0, 0, 0);

				 	} 
		  condexp 	{  

		  				sprintf(CommentBuffer, "Testing conditional into register r%d", $3.targetRegister);
		  				emitComment(CommentBuffer);
		  				sprintf(CommentBuffer, "If condition holds, will jump to L%d, otherwise will end loop and jump to L%d", $1.successLabel, $1.failLabel);

		  				emit(NOLABEL, CBR, $3.targetRegister, $1.successLabel, $1.failLabel);

		  				emit($1.successLabel, NOP, 0, 0, 0);


		  			} 
		  DO stmt  	{ 
		  				sprintf(CommentBuffer, "Jumping back to the beginng of while loop #%d", $1.headLabel);
		  				emitComment(CommentBuffer);
		  				emit(NOLABEL, BR, $1.headLabel, 0, 0);
		  				
		  				sprintf(CommentBuffer, "END WHILE STATEMENT #%d", $1.headLabel);
		  				emitComment(CommentBuffer);
		  				
		  				emit($1.failLabel, NOP, 0, 0, 0);
		   			} 
	;


astmt : lhs ASG exp             { 
				  if (! ((($1.type == TYPE_INT) && ($3.type == TYPE_INT)) || 
						 (($1.type == TYPE_BOOL) && ($3.type == TYPE_BOOL)))) {
					printf("*** ERROR ***: Assignment types do not match.\n");
				  }

				  emit(NOLABEL,
									   STORE, 
									   $3.targetRegister,
									   $1.targetRegister,
									   EMPTY);
								}
	;

lhs	: ID			{ 
						int newReg1 = NextRegister();
						int newReg2 = NextRegister();

						SymTabEntry *entry = lookup($1.str);

						if(entry == NULL){
							printf("*** ERROR ***: Variable undeclared.\n");
						}

						int offset = entry->offset;				
						
						$$.targetRegister = newReg2;
						$$.type = entry->type;

						sprintf(CommentBuffer, "Computing address for variable %s into register \"r%d\"", $1.str, newReg2);
						emitComment(CommentBuffer);
						emit(NOLABEL, LOADI, offset, newReg1, EMPTY);
						emit(NOLABEL, ADD, 0, newReg1, newReg2);
					}


								|  ID '[' exp ']' {   }
								;


exp	: exp '+' exp		{ 
							int newReg = NextRegister();

							if (! (($1.type == TYPE_INT) && ($3.type == TYPE_INT))) {
								printf("*** ERROR ***: Operator types must be integer.\n");
							}
							$$.type = $1.type;

							$$.targetRegister = newReg;
							sprintf(CommentBuffer, "ADD'ing variables stored in registers %d and %d", $1.targetRegister, $3.targetRegister);
								emitComment(CommentBuffer);
							emit(NOLABEL, ADD, $1.targetRegister, $3.targetRegister, newReg);
						
						}

		| exp '-' exp		{

								int newReg = NextRegister();

								if (! (($1.type == TYPE_INT) && ($3.type == TYPE_INT))) {
									printf("*** ERROR ***: Operator types must be integer.\n");
								}
								$$.type = $1.type;

								$$.targetRegister = newReg;
								sprintf(CommentBuffer, "SUB'ing variables stored in registers %d and %d", $1.targetRegister, $3.targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, SUB, $1.targetRegister, $3.targetRegister, newReg);

							}

		| exp '*' exp		{

								int newReg = NextRegister();

								if (! (($1.type == TYPE_INT) && ($3.type == TYPE_INT))) {
									printf("*** ERROR ***: Operator types must be integer.\n");
								}
								$$.type = $1.type;

								$$.targetRegister = newReg;

								sprintf(CommentBuffer, "MULT'ing variables stored in registers %d and %d", $1.targetRegister, $3.targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, MULT, $1.targetRegister, $3.targetRegister, newReg);

							}

		| exp AND exp		{

								int newReg = NextRegister();

								if($1.type != TYPE_BOOL || $3.type != TYPE_BOOL){
									printf("*** ERROR ***: Operator types must be boolean.\n");
								}

								$$.type = $1.type;
								$$.targetRegister = newReg;

								sprintf(CommentBuffer, "AND'ing variables stored in registers %d and %d", $1.targetRegister, $3.targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, AND_INSTR, $1.targetRegister, $3.targetRegister, $$.targetRegister);

							} 


		| exp OR exp       	{ 

								int newReg = NextRegister();

								if($1.type != TYPE_BOOL || $3.type != TYPE_BOOL){
									printf("*** ERROR ***: Operator types must be boolean.\n");
								}

								$$.type = $1.type;
								$$.targetRegister = newReg;

								sprintf(CommentBuffer, "OR'ing variables stored in registers %d and %d", $1.targetRegister, $3.targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, OR_INSTR, $1.targetRegister, $3.targetRegister, $$.targetRegister);


							}


		| ID				{ 
								int newReg = NextRegister();
								
								SymTabEntry* entry = lookup($1.str);
								if(entry == NULL){
									printf("*** ERROR ***: Variable %s not found\n", $1.str);
								}

								int offset = entry->offset;

								$$.targetRegister = newReg;
								$$.type = entry->type;
								sprintf(CommentBuffer, "Loading variable %s from RHS to register \"r%d\"", $1.str, newReg);
								emitComment(CommentBuffer);
								emit(NOLABEL, LOADAI, 0, offset, newReg);								  
							}

		| ID '[' exp ']'	{   }
 


	| ICONST                 { int newReg = NextRegister();
							   $$.targetRegister = newReg;
				   $$.type = TYPE_INT;
				   emit(NOLABEL, LOADI, $1.num, newReg, EMPTY); }

		| TRUE                   { int newReg = NextRegister(); /* TRUE is encoded as value '1' */
							   $$.targetRegister = newReg;
				   $$.type = TYPE_BOOL;
				   emit(NOLABEL, LOADI, 1, newReg, EMPTY); }

		| FALSE                   { int newReg = NextRegister(); /* TRUE is encoded as value '0' */
							   $$.targetRegister = newReg;
				   $$.type = TYPE_BOOL;
				   emit(NOLABEL, LOADI, 0, newReg, EMPTY); }

	| error { yyerror("***Error: illegal expression\n");}  
	;


condexp	: exp NEQ exp		{
	
								$$.targetRegister = NextRegister();
								$$.type = TYPE_BOOL;

								if($1.type != $3.type){
									printf("*** ERROR ***: Incompatible type comparison\n");
								}

								sprintf(CommentBuffer, "Asserting \"r%d\" NE \"r%d\"", $1.targetRegister, $3.targetRegister);
								emitComment(CommentBuffer);
								emit(NOLABEL, CMPNE, $1.targetRegister, $3.targetRegister, $$.targetRegister);

							} 

		| exp EQ exp		{  } 

		| exp LT exp		{  }

		| exp LEQ exp		{  }

	| exp GT exp		{  }

	| exp GEQ exp		{  }

	| error { yyerror("***Error: illegal conditional expression\n");}  
		;

%%

void yyerror(char* s) {
		fprintf(stderr,"%s\n",s);
		}


int
main(int argc, char* argv[]) {

  printf("\n     CS415 Spring 2018 Compiler\n\n");

  outfile = fopen("iloc.out", "w");
  if (outfile == NULL) { 
	printf("ERROR: cannot open output file \"iloc.out\".\n");
	return -1;
  }

  CommentBuffer = (char *) malloc(650);  
  InitSymbolTable();

  printf("1\t");
  yyparse();
  printf("\n");

  PrintSymbolTable();
  
  fclose(outfile);
  
  return 1;
}




