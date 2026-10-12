#include <iostream>
#include <string>
using namespace std;

void calculatePayableAmount(string day, double amount);

int main()
{
    string day;
    double amount;
    char ch;

    cout << "Enter the day of purchase: ";
    cin >> day;
    cout << "Enter the total purchase amount: ";

    // Skip an optional '$' sign typed before the amount
    cin >> ch;
    if (ch != '$')
        cin.putback(ch);
    cin >> amount;

    calculatePayableAmount(day, amount);
    return 0;
}

void calculatePayableAmount(string day, double amount)
{
    if (day == "Sunday")
        amount = amount - amount * 0.10;   // 10% discount
    cout << "Payable Amount: $" << amount << endl;
}