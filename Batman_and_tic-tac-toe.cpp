// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/
// 30-03-2020 Very-easy/easy
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        char board[4][4];
        bool flag = false;
        string line;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                cin >> board[i][j];
        // Checking vertically
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (board[i][j] == 'x' && board[i][j + 1] == '.' && board[i][j + 2] == 'x')
                {
                    cout << "YES" << endl;
                    flag = true;
                }
                if (!flag)
                    if (board[i][j] == '.' && board[i][j + 1] == 'x' && board[i][j + 2] == 'x')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
                if (!flag)
                    if (board[i][j] == 'x' && board[i][j + 1] == 'x' && board[i][j + 2] == '.')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
            }
        }
        // Checking diagonally
        if (!flag)
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    if (board[i][j] == 'x' && board[i + 1][j + 1] == 'x' && board[i + 2][j + 2] == '.')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
                    if (!flag)
                        if (board[i][j] == '.' && board[i + 1][j + 1] == 'x' && board[i + 2][j + 2] == 'x')
                        {
                            cout << "YES" << endl;
                            flag = true;
                        }
                    if (!flag)
                        if (board[i][j] == 'x' && board[i + 1][j + 1] == '.' && board[i + 2][j + 2] == 'x')
                        {
                            cout << "YES" << endl;
                            flag = true;
                        }
                }
            }
        if (!flag)
            for (int i = 0; i < 2; i++)
            {
                for (int j = 3; j > 1; j--)
                {
                    if (board[i][j] == 'x' && board[i + 1][j - 1] == 'x' && board[i + 2][j - 2] == '.')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
                    if (!flag)
                        if (board[i][j] == '.' && board[i + 1][j - 1] == 'x' && board[i + 2][j - 2] == 'x')
                        {
                            cout << "YES" << endl;
                            flag = true;
                        }
                    if (!flag)
                        if (board[i][j] == 'x' && board[i + 1][j - 1] == '.' && board[i + 2][j - 2] == 'x')
                        {
                            cout << "YES" << endl;
                            flag = true;
                        }
                }
            }
        // Checking horizontally
        if (!flag)
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (board[i][j] == 'x' && board[i + 1][j] == 'x' && board[i + 2][j] == '.')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
                    if (board[i][j] == '.' && board[i + 1][j] == 'x' && board[i + 2][j] == 'x')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
                    if (board[i][j] == 'x' && board[i + 1][j] == '.' && board[i + 2][j] == 'x')
                    {
                        cout << "YES" << endl;
                        flag = true;
                    }
                }
            }
        if (!flag)
            cout << "NO" << endl;
    }
    return 0;
}