// Snake Battle Edition - Maze movement 
// Name: SYED MUHAMMAD HAAD     Reg No: 2026(S)-CS-112
#include <iostream>
using namespace std;
int playerRow = 1;
int playerCol = 1;
void drawMaze()
{
    cout << endl << "   SNAKE BATTLE EDITION" << endl << endl;

    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (row == playerRow && col == playerCol)
            {
                cout << "P ";
            }
            else if (row == 0 || row == 5 || col == 0 || col == 7)
            {
                cout << "# ";
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int choice;

    while (true)
    {
        drawMaze();

        cout << "1. Move horizontally" << endl;
        cout << "2. Move vertically" << endl;
        cout << "3. Move diagonally" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0)
        {
            break;                          // stop the game
        }
        else if (choice == 1)
        {
            playerCol = playerCol + 1;      // go right
        }
        else if (choice == 2)
        {
            playerRow = playerRow + 1;      // go down
        }
        else if (choice == 3)
        {
            playerRow = playerRow + 1;      // go down and right
            playerCol = playerCol + 1;
        }
        if (playerRow == 0 || playerRow == 5 || playerCol == 0 || playerCol == 7)
        {
            drawMaze();
            cout << "Boundary reached! Back to start." << endl;
            playerRow = 1;                  // go back to starting location
            playerCol = 1;
        }
    }

    return 0;
}            
