// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-the-box-of-cookies/
// 11-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numInts;
        cin >> numInts;
        int temp;
        int numTimesBitSet[32]={0};
        while(numInts--){
            cin >> temp;
            int bitPtr = 0;
            while(bitPtr < 32){
                ++numTimesBitSet[bitPtr++] += temp % 2; 
                temp /= 2;
            }
        }
        int maxRep = 0, RES;
        for(int i = 0; i < 32; ++i){
            if(numTimesBitSet[i] > maxRep){
                maxRep = numTimesBitSet[i];
                RES = i;
            }
        }
        cout << RES << endl;
    }
}