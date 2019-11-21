// The source code file use.cpp #includes my.h, defines main() to set the value of foo to 7 and print it using print_foo(), and
// to print the value of 99 using print(). Note that use.cpp does not #include std_lib_ facilities.h as it doesn’t directly use any of those facilities.

#include <iostream>
#include "my.h"

using namespace std;

int main()
{
    foo = 7;
    print_foo();
    print(99);
}