#include <iostream>
using namespace std;

void Vote(int age);

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    Vote(age);
    return 0;
}

void Vote(int age)
{
    if (age >= 18)
        cout << "You are eligible to vote." << endl;
    if (age < 18)
        cout << "You are not eligible to vote." << endl;
}