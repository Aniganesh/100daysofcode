// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-6/
// 31-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int numLines, totLines;
        cin >> numLines;
        totLines = numLines;
        while (numLines--)
        {
            for (int i = 0; i < numLines; i++)
                cout << " ";
            for (int i = 0; i < totLines - numLines; i++)
                cout << "*";
            for (int i = 0; i < (totLines - numLines) - 1; i++)
                cout << "*";
            cout << endl;
        }
    }
}