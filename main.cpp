#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
#include <string>

int main(int argc, char *argv[]){
  std::cout << "HELLO" << std::endl;
  std::cout << indent("bad-code.cpp") << std::endl;
  return 0;
}
