// https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/adamant-vowels-e0d3025d-64d0fae9/
// 11-06-2020 Very-easy/easy
#include <bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    bool isVowel[26] = {false};
    isVowel['a' - 'a'] = true;
    isVowel['e' - 'a'] = true;
    isVowel['i' - 'a'] = true;
    isVowel['o' - 'a'] = true;
    isVowel['u' - 'a'] = true;
    string given, reverseString;
    cin >> given;
    reverseString = given;
    reverse(reverseString.begin(), reverseString.end());
    int numStubbornVowels = 0;

    for (int i = 0; i < reverseString.size(); ++i)
    {
        numStubbornVowels += (reverseString[i] == given[i] && isVowel[reverseString[i] - 97]);
    }
    cout << numStubbornVowels;
}