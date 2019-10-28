#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"
#include <string>

TEST_CASE("INDENT"){
  std::string fixed = "int main(){\n\t// Hi, I'm a program!\n\tint x = 1;\n\tfor(int i = 0; i < 10; i++) {\n\t\tcout << i;\n\t\tcout << endl;\n\t}\n}";
  CHECK(indent("bad-code.cpp")== fixed);
}
