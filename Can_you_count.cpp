// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/can-you-count-11795975/submissions/
// 12-06-2020 Very-easy/easy
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
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    while (numTestcases--)
    {
        string given;
        cin >> given;
        ll RES = 1;
        map<char, bool> mark;
        for (int i = 0; i < given.length(); ++i)
        {
            mark[given[i]] = true;
            if (given[i] == '_')
            {
                int count = 0;
                for (int j = 0; j < 5; ++j)
                {
                    if (mark[vowels[j]])
                    {
                        ++count;
                    }
                }
                RES *= count;
            }
        }

        cout << RES << endl;
    }
}