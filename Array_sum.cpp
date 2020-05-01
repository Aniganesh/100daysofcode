// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/
// 29-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numInts;
    cin >> numInts;
    long long SUM = 0, num;
    for (int i = 0; i < numInts; i++)
    {
        cin >> num;
        SUM += num;
    }
    cout << SUM << endl;
    return 0;
}