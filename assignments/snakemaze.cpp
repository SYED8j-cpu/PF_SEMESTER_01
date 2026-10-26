// Snake Battle Edition - Version 2 
// Name: SYED MUHAMMAD HAAD     Reg No: 2026(S)-CS-112
#include <iostream>
using namespace std;
const int ROWS = 15;
const int COLS = 40;
int playerRow = 11;
int playerCol = 18;
int enemy1Col = 1;          
int enemy2Row = 1;       
int enemy3Col = 36;        
int hits = 0;
void printHeader()
{
    cout << "************************************" << endl;
    cout << "*       SNAKE BATTLE EDITION       *" << endl;
    cout << "************************************" << endl;
}

void clearScreen()
{
    for (int i = 0; i < 30; i++)
    {
        cout << endl;
    }
}

void waitForKey()
{
    char dummy;
    cout << "Enter any key to continue.. (then press Enter) ";
    cin >> dummy;
}
char getCell(int row, int col)
{
    if (row == 0 || row == ROWS - 1 || col == 0 || col == COLS - 1)
    {
        return '#';
    }
    int r = row - playerRow;       
    int c = col - playerCol;
    if (r >= 0 && r <= 2 && c >= 0 && c <= 2)
    {
        if (r == 0 && c == 1) return 'O';     
        if (r == 1 && c == 0) return '/';     
        if (r == 1 && c == 1) return '|';
        if (r == 1 && c == 2) return '\\';
        if (r == 2 && c == 0) return '/';      
        if (r == 2 && c == 2) return '\\';
    }
    if (row == 4 && col >= enemy1Col && col <= enemy1Col + 2)
    {
        if (col == enemy1Col)     return '<';
        if (col == enemy1Col + 1) return 'E';
        return '>';
    }
    if (row == enemy2Row && col >= 18 && col <= 20)
    {
        if (col == 18) return '<';
        if (col == 19) return 'V';
        return '>';
    }
    if (row == 9 && col >= enemy3Col && col <= enemy3Col + 2)
    {
        if (col == enemy3Col)     return '<';
        if (col == enemy3Col + 1) return 'X';
        return '>';
    }
    return ' ';
}

void drawMaze()
{
    clearScreen();
    printHeader();

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << getCell(row, col);
        }
        cout << endl;
    }
    cout << "Hits: " << hits << endl;
}
void movePlayer(char key)
{
    if ((key == 'w' || key == 'W') && playerRow > 1)             
    {
        playerRow--;
    }
    else if ((key == 's' || key == 'S') && playerRow < ROWS - 4) 
    {
        playerRow++;
    }
    else if ((key == 'a' || key == 'A') && playerCol > 1)        
    {
        playerCol--;
    }
    else if ((key == 'd' || key == 'D') && playerCol < COLS - 4) 
    {
        playerCol++;
    }
}

void moveEnemies()
{
    enemy1Col++;
    if (enemy1Col > COLS - 4)
    {
        enemy1Col = 1;
    }
    enemy2Row++;
    if (enemy2Row > ROWS - 2)
    {
        enemy2Row = 1;
    }
    enemy3Col--;
    if (enemy3Col < 1)
    {
        enemy3Col = COLS - 4;
    }
}
bool isHit(int enemyRow, int enemyCol)
{
    if (enemyCol <= playerCol + 2 && enemyCol + 2 >= playerCol &&
        enemyRow >= playerRow && enemyRow <= playerRow + 2)
    {
        return true;
    }
    return false;
}

bool checkCollision()
{
    if (isHit(4, enemy1Col) || isHit(enemy2Row, 18) || isHit(9, enemy3Col))
    {
        return true;
    }
    return false;
}
int main()
{
    char key = ' ';

    while (key != 'x' && key != 'X')
    {
        drawMaze();
        cout << "W/A/S/D = move, X = exit. Your move: ";
        cin >> key;
        movePlayer(key);
        moveEnemies();
        if (checkCollision())
        {
            hits++;
            playerRow = 11;            
            playerCol = 18;
            drawMaze();
            cout << "Enemy hit you! Back to start." << endl;
            waitForKey();
        }
    }
    cout << "Game over. Total hits: " << hits << endl;
    return 0;
}