#include <iostream>
#include <string>
using namespace std;

void printName(string name);

int main()
{
    string name;
    while (true)
    {
        cout << "Enter your name: ";
        cin >> name;
        printName(name);
    }
    return 0;
}

void printName(string name)
{
    cout << name << endl;
}