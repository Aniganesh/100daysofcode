// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/sum-of-primes-7/
// 20-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    vector<bool> isPrime(9999999, true);
    vector<ll> sumPrimes(9999999, 0);
    ll tempSum = 0;
    for(int i = 2; i < 9999999; ++i){
        if(isPrime[i]){
            tempSum += i;
            for(int j = 2; j*i < 9999999; ++j){
                isPrime[j*i] = false;
            }
        }
        sumPrimes[i] = tempSum;
    }
    
    ll numQueries;
    scanf("%lld", &numQueries);
    while(numQueries--){
        ll left, right;
        scanf("%lld %lld", &left, &right);
        // cout << sumPrimes[right] << " " << sumPrimes[left-1] << endl;
        printf("%lld\n", sumPrimes[right]-sumPrimes[left-1]);
    }
}