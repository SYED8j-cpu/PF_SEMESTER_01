#include <iostream>
using namespace std;
int main() {
    string team;
    int wins, draws, losses, points;
    cout << "Enter the name of the cricket team: ";
    cin >> team;
    cout << "Enter the number of wins: ";
    cin >> wins;
    cout << "Enter the number of draws: ";
    cin >> draws;
    cout << "Enter the number of losses: ";
    cin >> losses;
    points = wins * 3 + draws * 1 + losses * 0;
    cout << team << " has obtained " << points << " points in the Asia Cup tournament." << endl;
    return 0;
}