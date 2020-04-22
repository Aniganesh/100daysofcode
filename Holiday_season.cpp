// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/holiday-season-ab957deb/
// 22-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int lenInput;
    cin >> lenInput;
    char input[lenInput+1];
    for(int i = 0; i < lenInput; i++)
        cin >> input[i];
    ll RES = 0;
    ll alphaFrequency[26] = {0};
    for(int i = 0; i < lenInput; i++){
        ll now = 0;
        for(int j = i + 1; j < lenInput; j++){
            if(input[j] == input[i])
                RES += now;
            now += alphaFrequency[input[j] - 97];
        }
        alphaFrequency[input[i] - 97]++;
    }
    cout << RES;
}