// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-savior-3/
// 01-04-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int numElements, count = 0;
        cin >> numElements;
        int values[numElements];
        for (int i = 0; i < numElements; i++)
            cin >> values[i];
        for (int i = 0; i < numElements; i++)
            for (int j = i + 1; j < numElements; j++)
                if (((values[i] + values[j]) % 2) == 0 && values[i] != values[j])
                    count++;
        cout << count << endl;
    }
}