#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
#include <string>

int main(){
  std::cout << indent("bad-code.cpp") << std::endl;
  return 0;
}
