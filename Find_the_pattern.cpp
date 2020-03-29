// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-pattern-6/
// 29-03-2020 Very-easy/easy
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nums;
    long long num, minimum = LLONG_MAX, maximum = 0;
    cin >> nums;
    for (int i = 0; i < nums; i++)
    {
        cin >> num;
        minimum = min(minimum, num);
        maximum = max(maximum, num);
    }
    cout << minimum + maximum;
}