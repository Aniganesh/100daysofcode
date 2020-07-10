// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/encrypted-love/
// 10-07-2020 Very-easy/easy
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
    map<char, string> keypadMapping;
    keypadMapping['2'] = "abc";
    keypadMapping['3'] = "def";
    keypadMapping['4'] = "ghi";
    keypadMapping['5'] = "jkl";
    keypadMapping['6'] = "mno";
    keypadMapping['7'] = "pqrs";
    keypadMapping['8'] = "tuv";
    keypadMapping['9'] = "wxyz";

    while(numTestcases--){
        string encrypted, decrypted = "";
        cin >> encrypted;
        int i;

        for(i = 0; i < encrypted.length(); ){
            size_t hyphenPos = encrypted.find('-', i);
            if(hyphenPos == string::npos){
                break;
            }
            decrypted += keypadMapping[encrypted[i]][hyphenPos-i-1];
            i = hyphenPos+1;
        }
        decrypted += keypadMapping[encrypted[i]][encrypted.length()-i-1];
        

        cout << decrypted << endl;
    }
}