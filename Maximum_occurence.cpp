// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/
// 17-05-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    string input;
    unordered_map<char, ll> charFreq;
    getline(cin,input);
    for(char i: input)
        ++charFreq[i];
    pair<char, ll> RES = {'Z',0};
    for(pair<char, ll> i: charFreq){
        if(i.second > RES.second){
            RES = i;
        }else if(i.second == RES.second){
            RES.first = min(RES.first, i.first);
        }
    }
    cout << RES.first << " " << RES.second;
}