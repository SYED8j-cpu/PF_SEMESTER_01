#include <iostream>
using namespace std;
int main() {
    double mb, bits;
    cout << "Enter the size in megabytes (MB): ";
    cin >> mb;
    bits = mb * 1024 * 1024 * 8;
    cout << mb << " MB is equivalent to " << bits << " bits." << endl;
    return 0;
}