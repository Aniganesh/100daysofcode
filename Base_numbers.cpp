// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/in-another-base-1-e0d0f1ca/
// 26-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int constant, base, numDigits;

double logX(ll num, ll base){
    return log10(num) / log10(base);
}

bool satisfiesCondition(ll number, ll reqNumDigits){
    long double numberOfDigits = floor(number* logX(number, base) + logX(constant, base)) + 1;
    if(numberOfDigits >= reqNumDigits)
        return true;
    return false;
}

void solve(){
    // Find first number that satisfies given condition.
    ll minimum = 0, maximum = 1e9;
    while(minimum <= maximum){
        ll mid = (minimum + maximum) / 2;
        if(satisfiesCondition(mid, numDigits)){
            maximum = mid - 1;
        }else{
            minimum = mid + 1;
        }
    }
    // Find last number that satisfies given condition.
    ll minimum2 = 0, maximum2 = 1e9;
    while(minimum2 <= maximum2){
        ll mid = (minimum2 + maximum2) / 2;
        if(satisfiesCondition(mid, numDigits+1)){
            maximum2 = mid - 1;
        }else{
            minimum2 = mid + 1;
        }
    }
    cout << minimum2 - minimum << endl;
}

int main(){
    while(cin >> constant >> numDigits >> base){
        solve();
    }
    return 0;
}