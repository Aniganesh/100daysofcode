// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/shil-and-palindrome/
// 09-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string input;
    cin >> input;
    int len = input.length();
    int alphaFrequency[26] = {0};
    string RES = string(len,'0');
    for(int i = 0; i < len; i++){
        alphaFrequency[input[i]-97]++;
    }
    if(len % 2 == 0){
        for(int i = 0; i < 26; i++){
            if(alphaFrequency[i] % 2 != 0){
                cout << -1;
                return 0;
            }
        }
    }else{
        ll oddCount = 0;
        char c;
        for(int i = 0; i < 26; i++){
            if(alphaFrequency[i]%2 != 0){
                oddCount++;
                c = i+97;
            }
           
        }
        if(oddCount != 1){
            cout << -1;
            return 0;
        }
        RES[len/2] = c;
        alphaFrequency[c-97]--;
    }
    int j = 0;
    for(int i = 0; i < 26; i++){
        while(alphaFrequency[i] > 0){
            alphaFrequency[i]-=2;
            RES[j] = i + 97;
            RES[len-j-1] = i + 97;
            j++;
        }
    }
    cout << RES;
}