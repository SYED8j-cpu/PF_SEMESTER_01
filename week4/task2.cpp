#include <iostream>
using namespace std;

void inchesToFeet(double inches);

int main()
{
    double inches;
    cout << "Enter the measurement in inches: ";
    cin >> inches;
    inchesToFeet(inches);
    return 0;
}

void inchesToFeet(double inches)
{
    double feet = inches / 12;   // 12 inches = 1 foot
    cout << "Equivalent in feet: " << feet << endl;
}