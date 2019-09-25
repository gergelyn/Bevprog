#include <iostream>
using namespace std;

int main() {

    int a = 8;
    int b = 10;

    cout << "Csere elott a = " <<a<<" b = "<<b<<"\n";

    a = a^b;
    b = a^b;
    a = a^b;

    cout << "Csere utan a = "<<a<<" b = "<<b<<"\n";

    return 0;
}