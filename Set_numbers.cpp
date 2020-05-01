// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/set-numbers-bea74f5a/
// 28-03-2020 Very-easy/easy
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long prev, current = 1, num;
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        cin >> num;
        int i = 0;
        while (true)
        {
            prev = current;
            current = pow(2, i);
            if (current > num)
                break;
            i++;
        }
        if (current == num + 1)
            cout << num << endl;
        else
            cout << prev - 1 << endl;
    }
}
