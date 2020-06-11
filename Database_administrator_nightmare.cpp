// https://www.hackerearth.com/problem/algorithm/database-administrator-nightmare-7c15ec09/submissions/
// 11-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string s;
    map<char, int> alphaFreq;
    
    cin >> s;

    for(char i: s){
        ++alphaFreq[i];
    }

    bool fail = false;

    for(pair<char,int> i: alphaFreq){
        if(i.second > 1){
            cout << "False";
            fail = true;
            break;

        }
    }

    if(!fail)
        cout << "True";
}