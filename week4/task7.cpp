#include <iostream>
using namespace std;

void evenOrOdd(int number);

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    evenOrOdd(number);
    return 0;
}

void evenOrOdd(int number)
{
    if (number % 2 == 0)
        cout << "Number " << number << " is even" << endl;
    if (number % 2 != 0)
        cout << "Number " << number << " is odd" << endl;
}