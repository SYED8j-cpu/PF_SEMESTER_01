#include <iostream>
using namespace std;

void addition(double number1, double number2);
void subtraction(double number1, double number2);
void multiplication(double number1, double number2);
void division(double number1, double number2);

int main()
{
    double number1, number2;
    char op;

    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    if (op == '+')
        addition(number1, number2);
    if (op == '-')
        subtraction(number1, number2);
    if (op == '*')
        multiplication(number1, number2);
    if (op == '/')
        division(number1, number2);

    return 0;
}

void addition(double number1, double number2)
{
    cout << "Addition: " << number1 + number2 << endl;
}

void subtraction(double number1, double number2)
{
    cout << "Subtraction: " << number1 - number2 << endl;
}

void multiplication(double number1, double number2)
{
    cout << "Multiplication: " << number1 * number2 << endl;
}

void division(double number1, double number2)
{
    if (number2 == 0)
        cout << "Error: division by zero is not allowed." << endl;
    else
        cout << "Division: " << number1 / number2 << endl;
}