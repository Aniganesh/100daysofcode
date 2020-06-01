// https://www.hackerearth.com/problem/algorithm/demo-20/
// 01-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    bool isVowel[26] = {false};
    isVowel['a'-'a'] = true;
    isVowel['e'-'a'] = true;
    isVowel['i'-'a'] = true;
    isVowel['o'-'a'] = true;
    isVowel['u'-'a'] = true;
    
    int strlength;
    cin >> strlength;
    string givenString;
    cin >> givenString;
    int countConsonants = 0;

    for(char i: givenString){
        if(isalpha(i)){
            countConsonants += !isVowel[i-'a'];
        }
    }

    cout << countConsonants;
}