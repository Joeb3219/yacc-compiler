/**********************************************
        CS415  Project 2
        Spring  2015
        Student Version
**********************************************/

#ifndef ATTR_H
#define ATTR_H

typedef union {int num; char *str;} tokentype;

typedef enum quantity_type 		{QUANTITY_SCALAR, QUANTITY_ARRAY} QuantityType;

typedef enum type_expression 	{TYPE_INT=0, TYPE_BOOL, TYPE_ERROR} Type_Expression;

typedef struct {
	QuantityType quantityType;
	Type_Expression type;
	int targetRegister;
	int blocksNeeded;
} regInfo;

typedef struct {
	char** ids;
	int numIds;
} varIDList;

typedef struct {
	int headLabel;
	int failLabel;
	int successLabel;
	int targetRegister;
} labelInfo;

#endif


  
