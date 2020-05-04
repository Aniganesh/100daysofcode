// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roys-life-cycle-44/
// 04-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    cin.tie();
    ios::sync_with_stdio();
    int numDays;
    cin >> numDays;
    string today, historical;
    int longestInDay = 0, longestHistorical = 0;
    while(numDays--){
        string today;
        cin >> today;
        for(int i = 0; i < today.length(); i++){
            int count = 0;
            while(today[i] == 'C' && i < today.length())
                ++count, ++i;
            longestInDay = max(longestInDay, count);
        }
        historical += today;
    }
    for(int i = 0; i < historical.length(); i++){
        int count = 0;
        while(historical[i] == 'C' && i < historical.length())
            ++count, ++i;
        longestHistorical = max(longestHistorical, count);
    }
    cout << longestInDay << " " << longestHistorical;
}