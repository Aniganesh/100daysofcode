// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-sum/
// 31-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long SUM = 0;
    string inputString;
    cin >> inputString;
    for (auto i : inputString)
        SUM += (i - 96);
    cout << SUM;
}