// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ispalin/
// 15-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numChars, numQueries;
        cin >> numChars >> numQueries;
        string input;
        cin >> input;
        int alphaFreq[input.length()+1][26];
        memset(alphaFreq, 0, sizeof(alphaFreq));
        for(int i = 1; i <= numChars; i++){
            int charPos = input[i-1]-97;
            for(int j = 0; j < 26; j++){
                    alphaFreq[i][j] = alphaFreq[i-1][j];
            }
            alphaFreq[i][charPos]++;
        }
        while(numQueries--){
            int begin, end;
            cin >> begin >> end;
            int numOdd = 0;
            for(int i = 0; i < 26; i++){
                numOdd += (alphaFreq[end][i] - alphaFreq[begin-1][i]) & 1;
            }
            if(numOdd == 0 || numOdd == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

}