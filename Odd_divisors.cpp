// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/odd-divisors-1-4939f17d/
// 22-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

long long sqr(ll x, long& M){
    x %= M;
    return x * x % M;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        ll n;
        long m;
        cin >> n >> m;
        ll RES = 0;
        
        while(n){
            RES = (RES + sqr(n/2+n%2, m)) % m;
            n /= 2;
        }

        cout << RES << endl;
    }

    return 0;
}