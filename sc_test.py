
#!/usr/bin/python3
import os
import subprocess
import json

# Dictionary of Dictionaries
# file : {
#   'stats' : <last line stats>,
#   'output' : <output lines>
# }
base_block_outputs = {}

ILOC_SIM = "./sim"
if not os.path.exists(ILOC_SIM):
    print("\'%s\' not found.\nPlease add it to the same directory as the test script." % (ILOC_SIM))
    exit()
TEST_CASE_PATH = "testcases/"
if not os.path.exists(TEST_CASE_PATH):
    print("\'%s\' not found.\nPlease add it to the same directory as the test script." % (TEST_CASE_PATH))
    exit()
SOL_CODEGEN = "./sol-codegen"
SOL_CODEGEN_OUTPUT_FILE = "iloc.out"
MY_CODEGEN = "./codegen"
CLEAN = "make clean"
CREATE = "make"
CLEAN = "make clean"

ERASE_LINE = '\x1b[2K'

def main():
    print(os.popen(CLEAN).read())
    print(os.popen(CREATE).read())
    # Gather all the testcase files from the target directory
    all_files = gather_file_names(TEST_CASE_PATH)
    # print(all_files)
    # Generate Dictionary of Results
    # JSON like dict of test file information
    # {
    #     'filepath' : {
    #         'stats' : <last line of Iloc output>
    #         'output' : <output from Simulation>
    #     }
    # }
    testcases = {}
    # Build File_args
    for test_file in all_files:
        # Build base_output
        testcases[test_file] = {}
        # Run each file once to get expected output
        output_file = run_sol_codegen(test_file)
        testcases[test_file] = run_iloc_sim(output_file)
        os.remove(output_file)
    # print(json.dumps(testcases, indent=4))

    for case in testcases:
        short_file = os.path.basename(case)

        # Get base sol-codegen output
        experimental = testcases[case]
        base_stats = experimental['stats']
        base_output = experimental['output']

        print("\r****** Testing %s ******" % (short_file), end='')
        my_output_file = run_my_codegen(case)
        my_output = run_iloc_sim(my_output_file)
        os.remove(my_output_file)

        my_stats = my_output['stats']
        my_output = my_output['output']

        error_report = get_match_output_report(base_output, my_output)

        # If no report is sent, there's no mismatch, we passed!
        if error_report:
            print(ERASE_LINE, end = '')
            print("\r****** %s FAILED ******" % short_file)
            print_report(error_report)
        else:
            print("\r****** %s PASSED ******" % short_file)
    print(os.popen(CLEAN).read())

def run_sol_codegen(filename):
    # print(filename)
    output_lines = []
    # Otherwise do add them
    exe_line = ('%s < %s'  % (SOL_CODEGEN, escape_filename(filename)))
    # print(exe_line)
    output = os.popen(exe_line).read()
    if not os.path.exists(SOL_CODEGEN_OUTPUT_FILE):
        print("Error Running Code Gen on file: %s in rul_sol_codegen" % (filename))
        print(output)
        return None
    return SOL_CODEGEN_OUTPUT_FILE

# Adds '' to file name so spaces don't need to be escaped
def escape_filename(filename):
    return '\'%s\'' % filename

# Runs the iLoc Simulator on the given file with the given args
# Returns a dict {
#   'stats' : <last line of Iloc output>
#   'output' : <output from Simulation>
# }
def run_iloc_sim(filename):
    output_lines = []
    exe_line = ('%s < %s'  % (ILOC_SIM, escape_filename(filename)))
    # print(exe_line)
    # TODO : What if errors
    output = os.popen(exe_line).read()
    # Split output by newline and ignore last empty line after split
    output_lines = output.split('\n')[:-1]
    return {
        'stats' : output_lines[-1],
        'output' : output_lines[:-1],
    }

def run_my_codegen(filename):
    # print(filename)
    output_lines = []
    # Otherwise do add them
    exe_line = ('%s < %s'  % (MY_CODEGEN, escape_filename(filename)))
    # print(exe_line)
    output = os.popen(exe_line).read()
    if not os.path.exists(SOL_CODEGEN_OUTPUT_FILE):
        print("Error Running Code Gen on file: %s in rul_sol_codegen" % (filename))
        print(output)
        return None
    return SOL_CODEGEN_OUTPUT_FILE


# Collections *.i Files to test allocator on
def gather_file_names(testcase_dir):
    test_files = []
    for root, dirs, files in os.walk(os.path.abspath(testcase_dir)):
        for file in files:
            test_files.append(os.path.join(root, file))
    return test_files


def get_match_output_report(base, my):
    report = []
    passed = True
    if len(base) != len(my):
        report.append("TOTAL LINES -> Expected: %d | Got: %s" % (len(base), len(my)))
        passed = False

    for i in range(min(len(base), len(my))):
        if base[i] != my[i]:
            report.append("Line %d | %s | Got: %s" % (i, base[i], my[i]))
            passed = False
        else:
            report.append("Line %d | %s" % (i, base[i]))

    if passed:
        return None
    return report

def print_report(report):
    for line in report:
        print(line)

if __name__ == '__main__':
    main()
