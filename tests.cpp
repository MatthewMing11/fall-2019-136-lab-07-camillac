#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"
#include <string>

TEST_CASE("UNINDENT"){
  // CHECK(unindent("bad-code.cpp")=="int main(){\n// Hi, I'm a program!\nint x = 1;\nfor(int i = 0; i < 10; i++) {\ncout << i;\ncout << endl;\n}\n}");
  CHECK(indent("bad-code.cpp")=="int main(){\n\t// Hi, I'm a program!\n\tint x = 1;\n\tfor(int i = 0; i < 10; i++) {\n\t\tcout << i;\n\t\tcout << endl;\n\t}\n}");
}
