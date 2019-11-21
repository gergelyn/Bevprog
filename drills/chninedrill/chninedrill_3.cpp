#include <iostream>

using namespace std;

class Date
{
public:
    Date(int yy, int mm, int dd);

    int year() const;
    int month() const;
    int day() const;

    void add_day(int n);

private:
    int y;
    int m;
    int d;
};

Date::Date(int yy, int mm, int dd)
{
    if (mm <= 12 && mm >= 1 && dd <= 31 && dd >= 1)
    {
        y = yy;
        m = mm;
        d = dd;
    }
    else
    {
        cout << "Invalid date!" << '\n';
    }
}

int Date::year() const
{
    return y;
}
int Date::month() const
{
    return m;
}
int Date::day() const
{
    return d;
}

void Date::add_day(int n)
{
    if (d == 31 && n >= 1)
    {
        d = 0 + n;
        m++;
    }
    else
    {
        d = d + n;
    }
    if (m > 12 && n >= 1)
    {
        m = m - 12;
        y++;
    }
}

std::ostream &operator<<(std::ostream &os, const Date &d)
{

    os << '(' << d.year() << '.' << d.month() << '.' << d.day() << ')';
    return os;
}

void f()
{
    Date today = {1978, 7, 25};
    Date tomorrow = today;
    cout << today << '\n';
    tomorrow.add_day(1);
    cout << tomorrow << '\n';
}

int main()
{
    f();
}