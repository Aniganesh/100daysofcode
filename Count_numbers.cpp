// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-numbers-46/
// 29-03-2020 Day 3 very-easy/Easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int count = 0;
        int stringLen;
        cin >> stringLen;
        string inputString;
        cin >> inputString;
        for (auto i = inputString.begin(); i < inputString.end(); i++)
        {
            if (*i > 47 && *i < 58)
            {
                count++;
            }
            while (*i > 47 && *i < 58 && i < inputString.end())
            {
                i++;
            }
        }
        cout << count << endl;
    }
}