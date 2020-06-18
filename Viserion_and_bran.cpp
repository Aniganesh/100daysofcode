// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/viserion-6ef1b663/
// 19-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;
ll calculate(ll base, ll power){
    ll res = 1;
    
    while(power>0){
        if(power&1){
            res = res*base MOD;
        }
        base = base*base MOD;
        power >>= 1;
    }
    
    return res;
}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        string binNum;
        cin >> binNum;
        ll len = binNum.size()-1;
        ll RES = calculate(2, len);
        cout << RES << endl;
    }
}