// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-shino-and-coins-3/
// 07-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
    int numReq, numPairs = 0;
    cin >> numReq;
    string coinSeq;
    cin >> coinSeq;
    for(int i = 0; i < coinSeq.length(); i++){
        set<char> unique;
        for(int j = i; j < coinSeq.length(); j++){
            unique.insert(coinSeq[j]);
            if(unique.size() == numReq)
                numPairs++;
            else if(unique.size() > numReq) break;
        }        
    }
    cout << numPairs;
}