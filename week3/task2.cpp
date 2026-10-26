#include <iostream>
using namespace std;
int main() {
    int rupee = 200;        
    int inputValue;    
    int convertedValue;     
    cout << "$1= " << rupee << " rupees" << endl;
    cout << "Enter dollars: ";
    cin >> inputValue;
    convertedValue = rupee * inputValue;
    cout << convertedValue << endl;
    return 0;
}