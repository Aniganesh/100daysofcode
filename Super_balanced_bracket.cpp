// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/superbalancedbracket-75edd495/
// 19-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        string bracketSequence;
        cin >> bracketSequence;
        int start = 0, close = count(bracketSequence.begin(), bracketSequence.end(), ')'), RES = 0;
        for(char i: bracketSequence){
            if(i == '(')
                RES = max(RES, min(++start, close) * 2);
            else
                close--;
        }
        cout << RES << endl;
    }
}