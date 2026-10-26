#include <iostream>
using namespace std;
int main() {
    float pounds, kilograms;
    cout << "Enter weight in pounds: ";
    cin >> pounds;
    kilograms = pounds * 0.45;
    cout << pounds << " pounds is equal to " << kilograms << " kilograms." << endl;
    return 0;
}