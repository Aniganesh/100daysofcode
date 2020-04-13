// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/battle-of-words/
// 13-04-2020 Very-easy/easy
#include <bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int alphaFreqAlice[27] = {0}, alphaFreqBob[27] = {0};
        string alice, bob;
        cin.ignore();
        getline(cin, alice);
        getline(cin, bob);
        for (int i = 0; i < alice.length(); i++)
        {
            if (isalpha(alice[i]))
                alphaFreqAlice[alice[i] - 97]++;
        }
        for (char i : bob)
        {
            if (isalpha(i))
                alphaFreqBob[i - 97]++;
        }
        bool aliceWinning = false, bobwinning = false;
        for (int i = 0; i < 26; i++)
        {
            if (alphaFreqAlice[i] > alphaFreqBob[i])
                aliceWinning = true;
            else if (alphaFreqAlice[i] < alphaFreqBob[i])
                bobwinning = true;
        }
        if (bobwinning && aliceWinning)
        {
            cout << "You draw some." << endl;
        }
        else if (bobwinning)
            cout << "You lose some." << endl;
        else
            cout << "You win some." << endl;
    }
}