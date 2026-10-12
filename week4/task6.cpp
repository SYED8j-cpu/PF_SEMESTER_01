#include <iostream>
using namespace std;

void passOrFail(int score);

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    passOrFail(score);
    return 0;
}

void passOrFail(int score)
{
    if (score > 50)
        cout << "Pass" << endl;
    if (score <= 50)
        cout << "Fail" << endl;
}