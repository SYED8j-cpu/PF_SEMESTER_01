#include <iostream>
using namespace std;
int main() {
    char code;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    if (code == 'r' || code == 'R') {
        int minutes;
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        float bill = 10.00;                      
        if (minutes > 50)
            bill = bill + (minutes - 50) * 0.20; 
        cout << "Service Type: Regular" << endl;
        cout << "Total Minutes Used: " << minutes << " minutes" << endl;
        cout << "Amount Due: $" << bill << endl;
    }
    else if (code == 'p' || code == 'P') {
        int dayMinutes, nightMinutes;
        cout << "Enter the number of minutes used during the day: ";
        cin >> dayMinutes;
        cout << "Enter the number of minutes used during the night: ";
        cin >> nightMinutes;
        float bill = 25.00;                      
        if (dayMinutes > 75)
            bill = bill + (dayMinutes - 75) * 0.10;
        if (nightMinutes > 100)
            bill = bill + (nightMinutes - 100) * 0.05;
        cout << "Service Type: Premium" << endl;
        cout << "Total Minutes Used: " << dayMinutes + nightMinutes << " minutes" << endl;
        cout << "Amount Due: $" << bill << endl;
    }
    else {
        cout << "Error: invalid service code" << endl;
    }
    return 0;
}