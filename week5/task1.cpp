# include <iostream>
using namespace std;

    void reversenumber(int number)
    {
        int reverse = 0;
        bool isnegative = number < 0;

        if (isnegative)
        number = -number;
    while (number > 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    if (isnegative)
    reverse = -reverse;

    cout<<"the reverse of number is:" << reverse <<endl;
    }

    int main()
    {
        int num;
        cout<<"enter a number :";
        cin >> num;

        reversenumber (num);
        return 0;
    }
