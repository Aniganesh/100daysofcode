// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/jarvis-and-seven-segments-1/
// 30-02-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

long long numBulbsReq(long long number)
{
    int bulbsForNumber[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, BULBREQ = 0;
    if (number == 0)
        BULBREQ = 6;
    while (number)
    {
        BULBREQ += bulbsForNumber[number % 10];
        number /= 10;
    }
    return BULBREQ;
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        long long numFavourite, minReq = LLONG_MAX, MINREQINDEX;
        cin >> numFavourite;
        long long favouriteNums[numFavourite];
        for (int i = 0; i < numFavourite; i++)
        {
            cin >> favouriteNums[i];
            if (minReq > numBulbsReq(favouriteNums[i]))
            {
                minReq = numBulbsReq(favouriteNums[i]);
                MINREQINDEX = i;
            }
        }
        cout << favouriteNums[MINREQINDEX] << endl;
    }
}