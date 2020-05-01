// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-clash-197de0e2/
// 17-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    ll alphaFrequency[26] = {0};
    string input1, input2;
    cin >> input1 >> input2;
    int maxOddFreq = 0, finalStringLength = 0;
    for(int i = 0; i < input1.length(); i++){
        alphaFrequency[input1[i] - 97]++;
        alphaFrequency[input2[i] - 97]++;
    }
    bool singleIncluded = false;
    for(int i = 0; i < 26; i++){
        if(alphaFrequency[i] & 1){
            singleIncluded = true;
            alphaFrequency[i]--;
        }
        finalStringLength += alphaFrequency[i];        
    }
    finalStringLength += singleIncluded;
    cout << finalStringLength << endl;

}