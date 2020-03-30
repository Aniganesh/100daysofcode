// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/
// 30-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numElements;
    cin >> numElements;
    int *all1000NumbersLookup = (int *)calloc(1000, sizeof(int));
    int minimum = INT_MAX;
    int maximum = 0;
    int num;
    while (numElements--)
    {
        cin >> num;
        all1000NumbersLookup[num]++;
        minimum = min(minimum, num);
        maximum = max(maximum, num);
    }
    for (; minimum <= maximum; minimum++)
    {
        if (!all1000NumbersLookup[minimum])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}