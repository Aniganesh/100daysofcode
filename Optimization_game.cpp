// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/optimization-game/
// 16-05-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numBits, temp;
        cin >> numBits;
        int RES = 0;
        ll countBitPow[int(1e5)+200] = {0};
        for(int i = 0; i < numBits; ++i){
            cin >> countBitPow[i];
        }
        for(int i = 0; i < 1e5+200; ++i){
            countBitPow[i+1] += countBitPow[i]/2;
            countBitPow[i] %= 2;
            RES += countBitPow[i];
        }
        
        cout << RES << endl;
    }
}