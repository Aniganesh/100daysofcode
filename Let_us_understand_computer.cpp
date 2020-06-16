// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/let-us-understand-computer-78476e7a/
// 16-05-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll RES[long(1e6) + 5] = {0};
    for(ll i = 1; i <= 1e6; ++i){
        ll r = 1;
        for(ll j = 1; j <= 20; ++j){
            r *= 2;
            if(r > i){
                break;
            }
        }
        RES[i] = (i*r)-1;
    }

    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        ll num;
        cin >> num;
        ll id = lower_bound(RES+1, RES+long(1e6)+1, num)-RES;
        cout << (num-id+1) << endl;
    }
}