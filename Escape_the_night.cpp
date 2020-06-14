// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/escape-the-night/
// 14-06-2020 Very-easy/easy

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
    ll num;

    while(numTestcases--){
        cin >> num;
        ll sum = 0;

        for(ll i = 2; i < num; i*=2){
            for(ll j = 1; j <  i; j*=2){
                if((i+j) <= num){
                    sum = (sum+i+j)MOD;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}