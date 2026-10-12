#include <iostream>
using namespace std;

void howManyStickers(int n);

int main()
{
    int n;
    cout << "Enter the side length of the Rubik's Cube: ";
    cin >> n;
    howManyStickers(n);
    return 0;
}

// 6 faces, each face has n * n stickers
void howManyStickers(int n)
{
    cout << "Number of stickers needed: " << 6 * n * n << endl;
}