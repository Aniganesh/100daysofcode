// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/unit-existence/
// 17-06-2020 Very-easy/easy
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
        int numValues;
        cin >> numValues;
        long values[numValues];
        
        for(int i = 0; i < numValues; ++i){
            cin >> values[i];
        }

        long RES = 0;
        
        for(int i = 0; i < numValues; ++i){
            RES ^= values[i];
        }

        if(RES){
            cout << RES << endl;
        }else{
            cout << "-1\n";
        }
    }
}