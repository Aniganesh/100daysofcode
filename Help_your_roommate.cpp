// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-new-experiment/
// 13-06-2020 Very-easy/easy
#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numTestcases;
    cin >> numTestcases;

    while (numTestcases--)
    {
        int target;
        cin >> target;
        cout << __builtin_popcount(target) << endl;
        // Doubling or adding one is simply progression in  binary representation. __builtin_popcount(T x) returns the number of set bits which is what is needed.
    }

    return 0;
}