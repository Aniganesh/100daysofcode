// https://www.hackerearth.com/problem/algorithm/encrypt-it/
// 11-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    map<char,char> encryptionMapping;
    for(char i = 'a'; i <= 'z';++i){
        encryptionMapping[i] = i;
    }
    encryptionMapping['b'] = 'd';
    encryptionMapping['d'] = 'b';
    encryptionMapping['p'] = 'q';
    encryptionMapping['q'] = 'p';
    while(numTestcases--){
        string givenStr;
        cin >> givenStr;
        for(char i: givenStr){
            cout << encryptionMapping[i];
        }
        cout << endl;
    }
}