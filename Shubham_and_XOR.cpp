// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/shubham-and-xor-8526868e/
// 14-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    ll numValues;
    unordered_map<ll, ll> rep;
    cin >> numValues;
    ll RES = 0, current;
    for(ll i = 0; i < numValues; ++i){
        cin >> current;
        ++rep[current];
        RES -= (1ll) * (rep[current] - 1) * (rep[current] - 2) / 2;
        RES += (1ll) * (rep[current]) * (rep[current] - 1) / 2;
    }
    cout << RES;
}