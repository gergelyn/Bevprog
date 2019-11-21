#include <iostream>

using namespace std;

namespace X
{
int var;
void print()
{
    cout << "X: " << var;
}
} // namespace X

namespace Y
{
int var;
void print()
{
    cout << "Y: " << var;
}
} // namespace Y

namespace Z
{
int var;
void print()
{
    cout << "Z: " << var;
}
} // namespace Z

int main()
{
    X::var = 7;
    X::print();
    using namespace Y;
    var = 9;
    print();
    {
        using Z::print;
        using Z::var;
        var = 11;
        print();
    }
    print();
    X::print();
}