// Task 09: age in years -> days (365 days per year, ignore leap years)
#include <iostream>
using namespace std;

int main() {
    int years, days;

    cout << "Enter your age in years: ";
    cin >> years;

    days = years * 365;

    cout << "Your age in days is approximately " << days << " days." << endl;
    return 0;
}