#include <iostream>
#include <string>
using namespace std;

void calculatePayableAmount(string day, double amount);

int main()
{
    string day;
    double amount;
    char ch;

    while (true)
    {
        cout << "Enter the day of purchase: ";
        cin >> day;
        cout << "Enter the total purchase amount: ";

        // Skip an optional '$' sign typed before the amount
        cin >> ch;
        if (ch != '$')
            cin.putback(ch);
        cin >> amount;

        calculatePayableAmount(day, amount);
        cout << endl;
    }
    return 0;
}

void calculatePayableAmount(string day, double amount)
{
    if (day == "Sunday")
        amount = amount - amount * 0.10;   // 10% on Sunday
    if (day != "Sunday")
        amount = amount - amount * 0.05;   // 5% on every other day
    cout << "Payable Amount: $" << amount << endl;
}