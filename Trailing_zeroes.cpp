// https://www.hackerearth.com/problem/algorithm/trailing-zeros/
// 30-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    ll num;
    cin >> num;
    ll numZeroes;

    for(ll i = 5; num/i >= 1; i *= 5){
        numZeroes += num/i;
    }
    
    cout << numZeroes;
}