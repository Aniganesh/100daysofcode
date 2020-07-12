// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-rise-of-jabari/
// 12-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numPeople;
    cin >> numPeople;
    ll RES = 1;
    bool atleastOneNonZeroEntry = false;
    
    while(numPeople--){
        ll x;
        cin >> x;
        if(x != 0){
            atleastOneNonZeroEntry = true;
            RES = RES*x/__gcd(RES,x);
        }
    }
    if(atleastOneNonZeroEntry){
        cout << RES;
    }else{
        cout << 0;
    }
}