#include <iostream>
using namespace std;

int main() {

    int a = 1;
    int b = 2;

    cout << "Csere elott A = "<<a<<" B = "<<b<<"\n";

    a = a + b;  // a = 3
    b = a - b;  // b = 1
    a = a - b;  // a = 2

    cout << "Csere utan A = "<<a<<" B = "<<b<<"\n";

    return 0;
}