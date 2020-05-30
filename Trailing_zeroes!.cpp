// https://www.hackerearth.com/problem/algorithm/trailing-zeros-686/
// 30-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numValues;
    cin >> numValues;
    ll numFives = 0;
    ll numTwos = 0;
    

    while(numValues--){
        ll val;
        cin >> val;
        
        while(val % 2 == 0){
            ++numTwos;
            val /= 2;
        }
        
        while(val % 5 == 0){
            ++numFives;
            val /= 5;
        }
    }

    

    cout << min(numFives, numTwos);
}