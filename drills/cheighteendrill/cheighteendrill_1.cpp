#include <iostream>

using namespace std;

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int ai[], int n)
{
    int la[10] = {};
    for (int i = 0; i < n; i++)
        la[i] = ai[i];

    cout << "Local copy\n";
    for (const auto &a : la)
        cout << a << ' ';
    cout << '\n';

    int *p = new int[n];
    for (int i = 0; i < n; i++)
        p[i] = ai[i];

    cout << "Pointer to free store\n";
    for (int i = 0; i < n; i++)
        cout << p[i] << ' ';
    cout << '\n';

    delete[] p;
}

int fac(int n) { return n > 1 ? n * fac(n - 1) : 1; }

int main()
{
    cout << "ga array\n";
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; i++)
        aa[i] = fac(i + 1);

    cout << "aa array\n";
    f(aa, 10);
}