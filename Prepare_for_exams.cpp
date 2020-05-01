// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lets-prepare-for-exams-a7f00d14/
// 02-04-2020 Very-easy/easy
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    string daysOfTheWeek[] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};
    cin >> testcases;
    while (testcases--)
    {
        int numTopicsPerDay[7];
        long long numTopics, numDays = 0, topicsPerWeek = 0;
        cin >> numTopics;
        bool flag = false;
        for (int i = 0; i < 7; i++)
        {
            cin >> numTopicsPerDay[i];
            topicsPerWeek += numTopicsPerDay[i];
            if (numTopicsPerDay[i] == 0)
                flag = true;
        }
        if (numTopics > topicsPerWeek && !flag)
            numTopics %= topicsPerWeek;
        while (numTopics > 0)
        {
            numTopics -= numTopicsPerDay[numDays % 7];
            numDays = (numDays + 1) % 7;
        }
        if (numDays)
            numDays -= 1;
        else
            numDays = 6;
        cout << daysOfTheWeek[numDays] << endl;
    }
}