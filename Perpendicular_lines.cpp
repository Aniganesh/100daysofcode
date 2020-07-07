// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sam-in-trouble-2-131edb9c/
// 07-07-2020 Very-easy/easy
#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

long X1, Y1, X2, Y2, X3, Y3, X4, Y4;
bool isLessThanTwoLines()
{
    if (((X1 == X2) && (Y1 == Y2)) || ((X3 == X4) && (Y3 == Y4)))
    {
        return true;
    }
    return false;
}
double round(double num, int precision)
{
    return floorf(num * pow(10.0f, precision) + .5f) / pow(10.0f, precision);
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numTestcases;
    cin >> numTestcases;

    while (numTestcases--)
    {
        double ar[8], m1 = 0, m2 = 0;
        for (int j = 0; j < 8; j++)
            cin >> ar[j];
        if (ar[0] == ar[2] && ar[1] == ar[3])
        {
            cout << "INVALID\n";
            continue;
        }
        if (ar[4] == ar[6] && ar[5] == ar[7])
        {
            cout << "INVALID\n";
            continue;
        }
        if (ar[1] == ar[3] && ar[4] == ar[6])
        {
            cout << "YES\n";
            continue;
        }
        if (ar[7] == ar[5] && ar[0] == ar[2])
        {
            cout << "YES\n";
            continue;
        }

        if ((ar[6] - ar[4]) * (ar[2] - ar[0]) == -1 * (ar[3] - ar[1]) * (ar[7] - ar[5]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}