// https://www.hackerearth.com/problem/algorithm/the-end-game-2/
// 11-06-2020 Very-easy/easy
#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numPeople;
    cin >> numPeople;
    int peopleAges[numPeople];
    int numGroups = 1;

    for (int i = 0; i < numPeople; ++i)
    {
        cin >> peopleAges[i];

        if (i != 0)
        {
            if (peopleAges[i] < peopleAges[i - 1])
            {
                ++numGroups;
            }
        }
    }

    cout << numGroups;
}
