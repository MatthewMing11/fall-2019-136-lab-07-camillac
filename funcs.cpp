#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
  int counter = 0;
  while (isspace(line[counter])){
    counter++;
  }
  return line.substr(counter);
}

int countChar(std::string line, char c){
  int i = 0;
  int num_chars = 0;
  while (line[i]){
    if (line[i] == c){
      num_chars++;
    }
    i++;
  }
  return num_chars;
}

std::string indent(std::string filename){

  std::ifstream fin(filename);
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string line, final;
  int num_tabs = 0;

  while(getline(fin,line)) {
    num_tabs -= countChar(line, '}');
    for (int i = num_tabs; i > 0; i--){
      final += "\t";
    }
    num_tabs += countChar(line, '{');
    final += removeLeadingSpaces(line) + '\n';
    // std::cout << "RUNNNG!" << std::endl;
  }

  return final.substr(0,final.length()-1); // remove the last newline character
}
