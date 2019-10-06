#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    1.  Cout << "Success!\n"; -> Capital 'c'
        cout << "Success!\n";

    2.  cout << "Success!\n; -> Missing closing quote
        cout << "Success!\n";

    3.  cout << "Success" << !\n" -> Unrecognized token, missing closing quote, missing semicolon
        cout << "Success" << "!\n"; 

    4.  cout << success << '\n'; -> identifier "success" is undefined
        cout << "success" << "\n";

    5.  string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; -> We are using ints, but res is a string
        int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

    6.  vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; -> v(5), != to ==
        vector<int> v(10);
        v[5] = 7;
        if (v[5] == 7)
        {
            cout << "Success!\n";
        }

    7.  if (cond) cout << "Success!\n"; else cout << "Fail!\n"; -> identifier "cond" is undefined
        bool cond = true;
        if (cond) {
            cout << "Success!\n";
        } else {
            cout << "Fail!\n";
        }

    8.  bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; -> (c) to (!c)
        bool c = false; 
        if (!c) {
            cout << "Success!\n";
        } else { 
            cout << "Fail!\n";
        }

    9.  string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n"; -> boo to bool, < to >
        string s = "ape";
        bool c = "fool" > s;
        if (c)
        {
            cout << "Success!\n";
        }

    10. string s = "ape"; if (s=="fool") cout << "Success!\n"; -> == to !=
        string s = "ape";
        if (s != "fool")
        {
            cout << "Success!\n";
        }

    11. string s = "ape"; if (s=="fool") cout < "Success!\n"; -> == to !=, < to <<
        string s = "ape";
        if (s != "fool")
        {
            cout << "Success!\n";
        }

    12. string s = "ape"; if (s+"fool") cout < "Success!\n"; -> + to !=, < to <<
        string s = "ape";
        if (s != "fool")
        {
            cout << "Success!\n";
        } 

    13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n"; -> 0 will always be less then v.size()
        vector<char> v(5);
        for (int i = 0; i < v.size(); ++i)
            ;
        cout << "Success!\n";

    14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; ->

    15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; -> i<6 to s.length(), because the sentence is longer than 6 chars
        string s = "Success!\n";
        for (int i = 0; i < s.length(); ++i) {
            cout << s[i];
        }

    16. if (true) then cout << "Success!\n"; else cout << "Fail!\n"; -> identifier "then is undefined"
        if (true) {
            cout << "Success!\n";
        } else {
            cout << "Fail!\n";
        }

    17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; -> c is not an integer
        int x = 2000;
        int c = x;
        if (c == 2000)
        {
            cout << "Success!\n";
        }

    18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; ->

    19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; -> string not identified
        vector<string> v(5);
        for (int i = 0; i <= v.size(); ++i)
            ;
        cout << "Success!\n";

    20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; -> i isn't increasing, so infinite loop is coming
        int i = 0;
        int j = 9;
        while (i < 10)
            ++i;
        if (j < i)
            cout << "Success!\n";

    21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n"; ->

    22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; -> put into the bin that <char>
        string s = "Success!\n";
        for (int i = 0; i <= 10; ++i)
            cout << s[i];

    23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; -> identifier "j" is undefined, i isn't increasing
        int i = 0;
        int j = 1;
        while (i < 10)
            ++i;
        if (j < i)
            cout << "Success!\n";

    24. int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; -> = to !=
        int x = 4;
        double d = 5 / (x–2);
        if (d != 2 * x + 0.5)
            cout << "Success!\n";

    25. cin << "Success!\n"; -> cin to output
        cout << "Success!\n";
    */
    return 0;
}