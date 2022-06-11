#include <bits/stdc++.h>
using namespace std;
void insertingQueen(int **board, int &i, int &j)
{
    cout << "Enter the postion of queen at starting" << endl;
    cin >> i >> j;
    board[i][j] = 1;
    return;
}
void currentPostionOfQueen(int **board, int &i, int &j)
{
    int x = i, y = j;
    bool test = false;
    for (x = 0; x < 8; x++)
    {
        for (y = 0; y < 8; y++)
        {
            if (x < 8 && y < 8 && board[x][y] == 1)
            {
                test = true;
                i = x;
                j = y;
            }
        }
    }
    if (test)
    {
        cout << "queen is present at postion " << i << " " << j << endl;
    }
    else
    {
        cout << "place the queen first" << endl;
    }
    getchar();
    return;
}
void movementForward(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i][(j + 1)] = 1;
    return;
}
void movementBackward(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i][j - 1] = 1;
}
void movementForwardRightDiagonal(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i + 1][j + 1] = 1;
}
void movementForwardLeftDiagonal(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i - 1][j + 1] = 1;
}
void movementBackwardRightDiagonal(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i + 1][j - 1] = 1;
}
void movementBackwardLeftDiagonal(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i - 1][j - 1] = 1;
}
void movementLeft(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i - 1][j] = 1;
}
void movementRight(int **board, int &i, int &j)
{
    board[i][j] = 0;
    board[i + 1][j] = 1;
}
int main()
{
    int n = 8, i, j;
    int **board = new int *[n];
    for (int i = 0; i < n; i++)
    {
        board[i] = new int[n];
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = 0;
        }
    }

    insertingQueen(board, i, j);

    while (1)
    {
        cout << "Enter 1 to move forward" << endl;
        cout << "Enter 2 to move backward" << endl;
        cout << "Enter 3 to move forward right" << endl;
        cout << "Enter 4 to move forward left" << endl;
        cout << "Enter 5 to move backward right" << endl;
        cout << "Enter 6 to move backward left" << endl;
        cout << "Enter 7 to move right" << endl;
        cout << "Enter 8 to move left" << endl;
        cout << "Enter 9 to Display current Postion" << endl;
        cout << "Enter 0 to exit" << endl;
        char oper;
        cin >> oper;

        switch (oper)
        {
        case '1':
            movementForward(board, i, j);
            break;
        case '2':
            movementBackward(board, i, j);
            break;
        case '3':
            movementForwardRightDiagonal(board, i, j);
            break;
        case '4':
            movementForwardLeftDiagonal(board, i, j);
            break;
        case '5':
            movementBackwardRightDiagonal(board, i, j);
            break;
        case '6':
            movementBackwardLeftDiagonal(board, i, j);
            break;
        case '7':
            movementRight(board, i, j);
            break;
        case '8':
            movementLeft(board, i, j);
            break;
        case '9':
            currentPostionOfQueen(board, i, j);
            break;
        case '0':
            goto exit;
            break;

        default:
            goto exit;
            break;
        }

        cout << endl
             << endl;
    }
exit:
    return 0;
}