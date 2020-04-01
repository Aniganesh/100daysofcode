// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/reflection-is-every-thing-2fff0566/
// 01-04-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int doubleLetterCount = 0;
    string inpString;
    getline(cin, inpString);
    for (int i = 0; i < inpString.length() - 1; i++)
        if (inpString[i] == inpString[i + 1])
            doubleLetterCount++;
    cout << doubleLetterCount;
}