#include <iostream>
#include <vector>

using namespace std;

void unit_to_meter(double &x, string unit);

bool wrong_unit_error(string unit);

void print_vector(vector<double> values);

int main()
{

    double x;
    double smallest_value;
    double largest_value;
    double sum_of_values = 0;
    string unit;
    int value_count = 0;
    vector<double> values;

    cout << "Please enter several values in different units\n";
    cout << "Allowed units: metres ('m'), centimetres ('cm'), feet ('ft'), inches ('in')\n";
    cout << "Sample: '12 m' , Do not forget to use space between the value and the unit!\n";
    cout << "To stop the input, enter '|' \n";

    cin >> x >> unit;

    if (wrong_unit_error(unit))
    {
        unit_to_meter(x, unit);
        smallest_value = x;
        largest_value = x;
        ++value_count;
        sum_of_values += x;
        values.push_back(x);
    }

    while (cin >> x >> unit)
    {

        if (wrong_unit_error(unit))
        {

            unit_to_meter(x, unit);

            if (x < smallest_value)
            {
                smallest_value = x;
                cout << "smallest so far\n";
            }
            else if (x > largest_value)
            {
                largest_value = x;
                cout << "largest so far\n";
            }

            values.push_back(x);
            sum_of_values += x;
            ++value_count;
        }
    }

    cout << "Smallest value in metres: " << smallest_value << "\n";
    cout << "Largest value in metres: " << largest_value << "\n";
    cout << "Values entered successfully: " << value_count << "\n";
    cout << "Sum of values: " << sum_of_values << "\n";
    cout << "Every value sorted: ";

    sort(values.begin(), values.end());
    print_vector(values);

    cout << "\n";

    return 0;
}

void unit_to_meter(double &x, string unit)
{

    if (unit == "m")
    {
        x = 1 * x;
    }
    else if (unit == "cm")
    {
        x = x / 100;
    }
    else if (unit == "in")
    {
        x = x * 2.54 / 100;
    }
    else if (unit == "ft")
    {
        x = x * 12 * 2.54 / 100;
    }
}

bool wrong_unit_error(string unit)
{

    if (unit != "m" && unit != "cm" && unit != "in" && unit != "ft")
    {

        cout << "Error! Wrong unit used. Please try again!\n";

        return false;
    }

    return true;
}

void print_vector(vector<double> values)
{

    for (int i = 0; i < values.size(); ++i)
    {
        cout << values[i] << " ";
    }
}