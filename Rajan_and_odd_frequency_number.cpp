// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/danny-and-his-loneliness/
// 11-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    map<int,int> numFreq;
    int numValues;
    cin >> numValues;
    numValues = (2*numValues)+1;
    long value, RES=0;
    while(numValues--){
        cin >> value;
        RES ^= value;
    }
    cout << RES << endl;
}