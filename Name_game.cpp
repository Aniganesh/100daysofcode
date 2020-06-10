// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/name-game-3/
// 10-06-2020 - Very-easy/easy
#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;
int val[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
void solve()
{
    long int n;
    cin >> n;
    string s;
    cin >> s;
    for (long int i = 0; i < n; i++)
    {
        int minn = 100;
        char p = s[i];

        for (long int j = 0; j < 12; j++)
        {
            if (minn > abs(s[i] - val[j]))
            {
                minn = abs(s[i] - val[j]);
                p = val[j];
            }
        }
        cout << p;
    }
    cout << endl;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numTestcases;
    cin >> numTestcases;

    while (numTestcases--)
        solve();
    return 0;
}