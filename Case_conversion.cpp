// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/case-conversion
// 31-03-2020 Very-easy/easy

#include <bits/stdc++.h>
using namespace std;

string caseConversion(string s)
{
    // Write your code here that converts the given camel case string s  and
    // returns a snake case version of that string
    string RES;
    string aToz = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 91 && i != 0)
            RES.push_back('_');
        if (s[i] < 91)
            RES.push_back(aToz[s[i] - 65]);
        else
            RES.push_back(s[i]);
    }
    return RES;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        string s;
        cin >> s;
        string out_;
        out_ = caseConversion(s);
        cout << out_;
        cout << "\n";
    }
}