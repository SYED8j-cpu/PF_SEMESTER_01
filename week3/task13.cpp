# include <iosream>
using namespace std;

int main() {
    long long population, n;

    cout << "Enter the current world population: ";
    cin >> population;
    cout << "Enter the monthly birth rate (number of births per month): ";
    cin >> n;

    population = population + n * 360;

    cout << "The population in three decades will be: " << population << endl;
    return 0;
}