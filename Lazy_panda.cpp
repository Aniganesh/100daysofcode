// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lazy-panda-1/
// 15-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        ll numSolvedProblems;
        cin >> numSolvedProblems;
        bitset<64> bits(numSolvedProblems);
        int RES = 0;

        for(int i = 0; i < 64; ++i){
            RES += bits[i];
        }

        cout << RES << endl;
    }
}