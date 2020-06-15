// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monks-choice-of-numbers-1/
// 15-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

bool compareSetBits(int& a, int& b){
    return __builtin_popcount(a) > __builtin_popcount(b);
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numCakes, numCanChoose;
        cin >> numCakes >> numCanChoose;
        int numbers[numCakes];
        
        for(int i = 0; i < numCakes; ++i){
            cin >> numbers[i];
        }

        sort(numbers, numbers+numCakes, compareSetBits);
        int RES = 0;

        for(int i = 0; i < numCanChoose; ++i){
            RES += __builtin_popcount(numbers[i]);
        }

        cout << RES << endl;
    }
}
