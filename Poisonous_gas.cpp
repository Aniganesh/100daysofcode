// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hunny-bunny-eebee22a/
// 14-06-2020 Very-easy/easy
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int numSoldiers, soldierStrength;
        long totalStrength = 0;
        cin >> numSoldiers;
        bool flag = false;

        if (numSoldiers == 1)
        {
            flag = 1;
        }

        while (numSoldiers--)
        {
            cin >> soldierStrength;
            totalStrength += soldierStrength;
        }

        if ((__builtin_popcount(totalStrength) == 1 && totalStrength != 64 && totalStrength != 16) || ((__builtin_popcount(totalStrength) == 1 && flag)))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}