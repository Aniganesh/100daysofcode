// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/digitial-sequence-ee0ea080/
// 28-06-2020 Very-easy/easy
#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int numArrayElements;
    cin >> numArrayElements;
    int numFreq[9] = {0};
    string val;

    while (numArrayElements--)
    {
        cin >> val;
        map<char, bool> marked;
        for (char c : val)
        {

            if (!marked[c])
            {
                ++numFreq[c - 48];
                marked[c] = true;
            }
        }
    }
    int RES = 0;

    for (int i = 0; i < 9; ++i)
    {
        RES = max(RES, numFreq[i]);
    }
    cout << RES;
}