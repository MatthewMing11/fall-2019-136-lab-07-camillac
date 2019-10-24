#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
  int counter;
  while (isspace(line[counter]){
    counter++;
  }
  return line.substr(counter);
}

std::string unindent(std::string filename){

  std::ifstream fin(filename);
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string line, final;

  getline(fin,line);
  final += removeLeadingSpaces(line);

  while(getline(fin,line)) {
    final += '\n' + removeLeadingSpaces(line);
  }

  return final;

}

int countChar(std::string line, char c){

}

std::string indent(std::string filename){

}
