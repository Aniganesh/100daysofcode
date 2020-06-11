// https://www.hackerearth.com/problem/algorithm/ac-or-cooler/
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

    int numRooms, allottedBudget;
    cin >> numRooms >> allottedBudget;
    int costs[2 * numRooms];

    for (int i = 0; i < 2 * numRooms; ++i)
    {
        cin >> costs[i];
    }

    sort(costs, costs + 2 * numRooms);
    int numCanBeInstalled = 0;

    for (int i = 0; i < 2 * numRooms; ++i)
    {

        if (allottedBudget - costs[i] >= 0)
        {
            ++numCanBeInstalled;
            allottedBudget -= costs[i];
        }
        else
        {
            break;
        }
        if (numCanBeInstalled >= numRooms)
            break;
    }

    cout << numCanBeInstalled;
}