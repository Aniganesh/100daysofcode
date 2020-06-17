// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lucky-numbers-20/
// 17-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int countSetBits(ll& n){
    bitset<64> bits(n);
    int RET = 0;
    
    for(int i = 0; i < 64; ++i){
        RET += bits[i];
    }

    return RET;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    vector<ll> valuesWith2SetBits;

    while(numTestcases--){
        ll maxNum;
        cin >> maxNum;
        
        if(maxNum <= 2){
            cout << "0\n";
            continue;
        }

        ll sum = 0, d = 3, i = 1, count = 0; 
        
        while(d <= maxNum){
            sum = (sum+d)MOD;
            ll m = 1, k = 1;

            for(ll j = 1; j <  i; ++j){
                if(d+m <= maxNum){
                    sum = (sum+d+m)MOD;
                }else{
                    break;
                }
                k *= 2;
                m += k;
                ++count;
            }

            d = (d-1)*2 + 1;
            ++i;
            ++count;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}