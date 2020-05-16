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
        ll countBitPow[numBits+200] = {0};
        for(int i = 0; i < numBits; ++i){
            cin >> countBitPow[i];
        }
        for(int i = 0; i < numBits+200; ++i){
            if(countBitPow[i] > 1){
                countBitPow[i+1]        
            }
        }
        
        cout << accumulate(countBitPow, countBitPow+numBits+5, 0) << endl;
    }
}