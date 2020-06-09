// https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/emma-and-the-prime-sum/submissions/
// 09-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

bool isPrime[ll(1e6+2)];
vector<ll> primes;

void sieveOfErastothenes(){
    memset(isPrime, true, sizeof isPrime);

    for(ll i = 2; i <= 1e6; ++i){
        if(isPrime[i]){
            primes.push_back(i);
            for(ll j = i*i; j <= 1e6; j+=i){
                isPrime[j] = false;
            }
        }
    }
    
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    sieveOfErastothenes();

    while(numTestcases--){
        ll low, high;
        cin >> low >> high;
        vector<ll>::iterator lb = lower_bound(primes.begin(), primes.end(), low);
        ll sum = 0;

        while(*lb <= high){
            sum += *lb;
            lb++;
        }

        cout << sum << endl;
    }

    return 0;
}