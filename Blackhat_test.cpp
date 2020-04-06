// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rot13-modified/
// 06-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

char ROTn(char a, int n){
    string Alphabets = "abcdefghijklmnopqrstuvwxyz";
    return Alphabets[((a-97)+n)%26];
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int Alphabets[26] = {0};
        string clearText;
        cin >> clearText;
        for(char i: clearText){
            cout << ROTn(i,13+Alphabets[i-97]);
            Alphabets[i-97]++;
        }
        cout << endl;
    }
}