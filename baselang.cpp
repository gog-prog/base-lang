/* 
Stuff to make this turing complete:
  [√] Dynamic array containing variables (variable names are assigned by which the order they were inserted to the list)
  [] @1. - Address of variable 1
  [] @/ - Next free address
  [] £@1. - Print the value at address 1
  [] $@/:11. - Store value 11 at next free address
  [] ^@4. - Get value at address 4
  [] $@/:^@0 - Store the value at address 0 to next free address
  [] ?^@101.=0.>&0. - If the value at address 101 is equal to 0, go to tag labeled 0 and return once finished
  [] &0. - Start of tag labeled 0
  [] % - Return from tag to current token
*/

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// print command (£)
void print_value(string to_print) {
  
}

// checks whether a value to be used is an address to the values structure (return true) or if it is not (return false)
bool check_address(string to_check) {
  if (!(to_check[0] == '@')) {
    return false;
  }
  return true;
}

int get_address(string to_get) {
  if (!(to_get[0] == '@')) {
    return -1;
  }

  int index = 1;
  int retval = 0;
  
  while (!(to_get[index] == '.')) {
    retval = retval * 10 + (to_get[index] - '0');
    index++;
  }
  return retval;
}

int main() {

  vector<int> values = {};
  vector<string> program = {};
  string line;

  vector<int> tokens = {0};
  int current_token = 0;

  ifstream program_txt("program.txt");

  while (getline(program_txt, line)) {
    program.push_back(line);
  }

  const int PROGRAM_LENGTH = program.size();

  program_txt.close();

  while (tokens[0] >= PROGRAM_LENGTH) {
    
  }
}
