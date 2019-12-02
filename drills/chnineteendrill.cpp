#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
struct S
{
public:
    S(T a) : val{a} {};

    T &get();
    T &get() const;

    void operator=(const T &newval);

private:
    T val;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, std::vector<T> &v)
{

    os << "{ ";

    for (int i = 0; i < v.size(); ++i)
    {

        os << v[i];

        if (i < v.size() - 1)
            os << ", ";
    }

    os << " }";

    return os;
}

template <typename T>
std::istream &operator>>(std::istream &is, std::vector<T> &v)
{

    char ch = 0;
    is >> ch;
    if (ch != '{')
    {
        is.unget();
        return is;
    }

    for (T elem; is >> elem;)
    {
        v.push_back(elem);
        is >> ch;
        if (ch != ',' || ch == '}')
            break;
    }

    return is;
}

template <typename T>
void S<T>::operator=(const T &newval)
{
    this->val = newval;
}

template <typename T>
T &S<T>::get()
{
    return val;
}

template <typename T>
T &S<T>::get() const
{
    return val;
}

template <typename T>
void read_val(T &v)
{

    cin >> v;
}

int main()
{

    S<char> Sch('b');
    S<int> Si(5);
    S<double> Sdb(5.2);
    S<string> Sstr("vazelin");
    S<vector<int>> Sv(vector<int>{1, 2});

    Sch = 'M';
    Si = 102;

    cout << "char: " << Sch.get() << ", int: " << Si.get() << ", double: " << Sdb.get() << ", string: " << Sstr.get() << ", " << Sv.get() << '\n';

    cout << "Set int value: ";

    int a;
    read_val(a);
    Si = a;

    cout << '\n';

    cout << "Set double value: ";

    double d;
    read_val(d);
    Sdb = d;

    cout << std::endl;

    cout << "Set string value: ";

    string str;
    read_val(str);
    Sstr = str;

    cout << '\n';

    cout << "Set char value: ";

    char c;
    read_val(c);
    Sch = c;

    cout << "\n";

    cout << "Set vector of ints value ( format: { int, int, int } ): ";

    vector<int> v1;
    read_val(v1);
    Sv = v1;

    cout << "char: " << Sch.get() << ", int: " << Si.get() << ", double: " << Sdb.get() << ", string: " << Sstr.get() << " vector<int>: " << Sv.get() << '\n';

    return 0;
}