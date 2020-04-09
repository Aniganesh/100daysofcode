// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/partition-string-db2c970d/
// 09-04-2020 Very-easy/easy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int t = 0;
    string z = "NO";
    for (int i = 0; i < s.size(); i++)
    {
        string x = "";
        x += s[i];
        for (int j = i + 1; j < s.size(); j++)
        {
            x += s[j];
            string y = x;
            reverse(y.begin(), y.end());
            if (string::npos != s.find(y))
            {
                if (x.size() > t)
                    t = x.size();
                z = "YES";
            }
        }
    }
    cout << z << endl;
    if (t != 0)
        cout << t << endl;
}