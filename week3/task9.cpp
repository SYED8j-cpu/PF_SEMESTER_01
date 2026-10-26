#include <iostream>
using namespace std;
int main() {
    int hours, seconds;
    cout << "Enter the number of hours: ";
    cin >> hours;
    seconds = hours * 3600;
    cout << hours << " hours is equivalent to " << seconds << " seconds." << endl;
    return 0;
}