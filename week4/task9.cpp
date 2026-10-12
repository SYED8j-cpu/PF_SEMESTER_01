#include <iostream>
using namespace std;

void calculateFuel(double distance);

int main()
{
    double distance;
    cout << "Enter the distance: ";
    cin >> distance;
    calculateFuel(distance);
    return 0;
}

void calculateFuel(double distance)
{
    double fuel = distance * 10;
    if (fuel < 100)
        fuel = 100;      // minimum fuel required
    cout << "Fuel needed: " << fuel << endl;
}