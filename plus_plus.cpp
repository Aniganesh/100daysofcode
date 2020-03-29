// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/plus-plus-60bcac48/description/
// 29-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numRows, numCols;
    cin >> numRows >> numCols;
    int matrix[numRows][numCols];
    for (int i = 0; i < numRows; i++)
        for (int j = 0; j < numCols; j++)
            cin >> matrix[i][j];
    int res = 0;
    for (int i = 1; i < numRows - 1; i++)
    {
        for (int j = 1; j < numCols - 1; j++)
        {
            for (int x = 1; x < numRows - 1; x++)
            {
                for (int y = 1; y < numCols - 1; y++)
                {
                    if (!(x < i + 2 && x > i - 2 && y < j + 2 && y > j - 2))
                    {
                        int temp = matrix[i][j] * matrix[x][y] + matrix[i - 1][j] * matrix[x - 1][y];
                        temp += (matrix[i + 1][j] * matrix[x + 1][y] + matrix[i][j + 1] * matrix[x][y + 1] + matrix[i][j - 1] * matrix[x][y - 1]);
                        res = max(res, temp);
                    }
                }
            }
        }
    }

    cout << res << endl;
}
