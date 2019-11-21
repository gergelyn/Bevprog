#include <iostream>
#include "my.h"

using namespace std;

// The source code file my.cpp #includes my.h and
// std_lib_facilities.h, defines print_foo() to print the value of foo using cout,
// and print(int i) to print the value of i using cout.
int foo;

void print_foo()
{
    cout << foo;
}

void print(int i)
{
    cout << i;
}