#include <iostream>
using namespace std;

int main() {

    int a = 2;
    int b = 4;

    cout << "Csere elott a = "<<a<<" b = "<<b<<"\n";

    a = a*b;    // a = 2*4 = 8
    b = a/b;    // b = 8/4 = 2
    a = a/b;    // a = 8/2 = 4

    cout << "Csere utan a = "<<a<<" b = "<<b<<"\n";

    return 0;
}