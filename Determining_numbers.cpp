// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/find-the-numbers-75f24949/
// 09-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    int value, xorRes[int(1e6)] = {0};
    for(int i = 0; i < numValues; ++i){
        cin >> value;
        xorRes[value] ^= 1;
    }
    for(int i = 1; i < 1e6; ++i){
        if(xorRes[i])
            cout << i << " ";
    }
}