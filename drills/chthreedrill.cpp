#include <iostream>
using namespace std;

int main() {
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age;

    cout << "Enter the name of the person you want to write to:\n";
    cin >> first_name;
    cout << "Dear " <<first_name<<",\n";
    cout << "I have not heard from you for ages. I was thinking of coming down to England next month. It would be lovely to catch up.\n";

    cout << "Enter the name of your other friend:\n"; 
    cin >> friend_name;
    cout << "Have you seen " <<friend_name<<" lately?\n";

    cout << "Enter an 'm' if your friend is male or an 'f' if your friend is female:\n";
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "If you see " <<friend_name<<" please ask him to call me.\n";
    } else if (friend_sex == 'f') {
        cout << "If you see " <<friend_name<<" please ask her to call me.\n";
    }

    cout << "Enter the age of the recipient:\n";
    cin >> age;
    cout << "I hear you just had a birthday and you are " <<age<<" years old.\n";
    if (age <= 0 || age >= 110) {
        cout << ("You are kidding!\n");
    } else if (age < 12) {
        cout << "Next year you will be " <<age+1<<".\n";
    } else if (age == 17) {
        cout << "Next year you will be able to vote.\n";
    } else if (age > 70) {
        cout << "I hope you are enjoying retirement.\n";
    }
    cout << "Yours sincerely, \n\nGergely Nagy\n";

    return 0;
}