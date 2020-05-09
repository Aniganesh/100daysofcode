// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hihi-and-crazy-bits/
// 09-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int countSetBits(long long& x){
    int count = 0, bit;
    while(x){
        bit = x & 1;
        x >>= 1;
        if(bit)
            ++count;
    }
    return count;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long baseNum;
        cin >> baseNum;
        long long i = baseNum + 1;
        while(1){
            ll xorRes = baseNum ^ i;
            if(countSetBits(xorRes) == 1){
                cout << i << endl;
                break;
            }
            ++i;
        }
    }
}