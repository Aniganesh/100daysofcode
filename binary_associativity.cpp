// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/binary-associativity-fc8ca73f/
// 27-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int truthTable[4];

bool operation(int a, int b)
{
    if (a == b && a == 0)
        return truthTable[0];
    if (a == b && a == 1)
        return truthTable[3];
    if (a == 0 && b == 1)
        return truthTable[1];
    return truthTable[2];
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        cin >> truthTable[0] >> truthTable[1] >> truthTable[2] >> truthTable[3];
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (operation(operation(i, j), k) != operation(i, operation(j, k)))
                    {
                        cout << "No" << endl;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
        if (!flag)
            cout << "Yes" << endl;
    }
}