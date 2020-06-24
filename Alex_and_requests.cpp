// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/alex-and-requests-72568e72/
// 24-06-2020 Very-easy/easy

#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numAllocationSystems, numRequests;
    cin >> numAllocationSystems >> numRequests;
    vector<int> allocation(numAllocationSystems + 1);

    while (numRequests--)
    {
        int priority;
        cin >> priority;
        int val = min(priority, numAllocationSystems);
        bool allocated = false;

        for (int i = val; i > 0; --i)
        {

            if (allocation[i] < priority)
            {
                allocation[i] = priority;
                cout << "YES\n";
                allocated = true;
                break;
            }
        }

        if (!allocated)
        {
            cout << "NO\n";
        }
    }
    return 0;
}