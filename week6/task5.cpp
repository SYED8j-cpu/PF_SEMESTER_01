#include <iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity) {
    bool isWeekend;
    if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday")
        isWeekend = true;
    else if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" ||
             dayOfWeek == "Thursday" || dayOfWeek == "Friday")
        isWeekend = false;
    else
        return -1;
    double price;
    if (fruit == "banana")          price = isWeekend ? 2.70 : 2.50;
    else if (fruit == "apple")      price = isWeekend ? 1.25 : 1.20;
    else if (fruit == "orange")     price = isWeekend ? 0.90 : 0.85;
    else if (fruit == "grapefruit") price = isWeekend ? 1.60 : 1.45;
    else if (fruit == "kiwi")       price = isWeekend ? 3.00 : 2.70;
    else if (fruit == "pineapple")  price = isWeekend ? 5.60 : 5.50;
    else if (fruit == "grapes")     price = isWeekend ? 4.20 : 3.85;
    else
        return -1;  
    return price * quantity;
}

int main() {
    string fruit, day;
    double quantity;

    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;

    float price = calculateFruitPrice(fruit, day, quantity);

    if (price == -1)
        cout << "error" << endl;
    else
        cout << price << endl;
    return 0;
}