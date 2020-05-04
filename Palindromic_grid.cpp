// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-grid-e55f3027/
// 04-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numRows, numCols;
        cin >> numRows >> numCols;
        string rows[numRows];
        map<char, int> alphaFreq;
        for(int i = 0; i < numRows; i++){
            cin >> rows[i];
            for(char ch: rows[i]){
                alphaFreq[ch]++;
            }
        }
        int notTwo = 0, notFour = 0;
        if((numCols % 2 == 0) && (numRows % 2 == 0)){
            for(pair<char, int>freq: alphaFreq){
                if(freq.second % 4 != 0){
                    notFour++;
                }
            }
            if(notFour){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
        else if((numCols % 2 != 0 && numRows %2 == 0) || (numCols % 2 == 0 && numRows % 2 != 0)){
            for(pair<char, int>freq: alphaFreq){
                if(freq.second % 4 != 0){
                    if(freq.second % 2 != 0){
                        notTwo++;
                    }
                }
            }
            if(notTwo){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
        else{
            for(pair<char, int>freq: alphaFreq){
                if(freq.second % 4 != 0){
                    if(freq.second % 2 != 0){
                        notTwo++;
                    }
                }
            }
            if(notTwo == 1){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
}