#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float aggregate;
    char section;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your roll number: ";
    cin >> roll;
    cout << "Enter your aggregate: ";
    cin >> aggregate;
    cout << "Enter your section: ";
    cin >> section;
    cout << "Student Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Aggregate: " << aggregate << endl;
    cout << "Section: " << section << endl;
    return 0;
}