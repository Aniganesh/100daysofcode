// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/diwali-celebration/
// 31-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    int savedCoins, coinsPerDay, nthDay;
    cin >> testcases;
    while (testcases--)
    {
        cin >> savedCoins >> coinsPerDay >> nthDay;
        cout << savedCoins + (coinsPerDay * (nthDay - 1)) << endl;
    }
}