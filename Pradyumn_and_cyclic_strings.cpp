// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/very-easy-1/
// 30-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    string s;
    while (testcases--)
    {
        cin >> s;
        cout << setprecision(10) << (pow(s.size(), 2) + s.size()) / 2 << endl;
    }
}