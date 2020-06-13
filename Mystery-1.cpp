// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-30/
// 13-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

ll countSetBits(ll& n){
    ll count = 0;
    while(n){
        n &= (n-1);
        ++count;
    };
    return count;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    
    ll num;

    while(!cin.eof()){
        cin >> num;
        cout << countSetBits(num) << "\n";
    }

    return 0;
}