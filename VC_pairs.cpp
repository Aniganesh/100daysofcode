// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/vc-pairs/
// 11-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    bool isVowel[26] = {false};
    isVowel[0] = true;
    isVowel[4] = true;
    isVowel[8] = true;
    isVowel[14] = true;
    isVowel[20] = true;
    while(numTestcases--){
        int length;
        cin >> length;
        string input;
        cin >> input;
        int RES = 0;
        for(int i = 0; i < length-1; ++i){
            if(!isVowel[input[i] - 97] && isVowel[input[i+1] - 97])
                ++RES;
        }
        cout << RES << endl;
    }
}

// Help: https://stackoverflow.com/questions/47846406/c-fastest-way-to-check-if-char-is-vowel-or-consonant