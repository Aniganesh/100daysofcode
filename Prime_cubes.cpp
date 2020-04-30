// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/problem-1-103/
// 30-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

vector<bool> isPrime(ll(1e6+1), 1);
vector<ll> primes;
vector<ll> products;

void seiveOfErastothenes(){
    for(ll i = 2; i <= 1e6; i++){
        if(isPrime[i]){
            primes.push_back(i);
            products.push_back(ll(i * i * i));
            if(i < 1001)
            for(int j = i*i; j <= 1e6; j += i){
                isPrime[j] = 0;
            }
        }
    }
}

int main(){
    seiveOfErastothenes();
    ll n;
    cin >> n;
    ll a = 1, b = 2, c = -1, d;
    n -= 9;
    for(ll i = 0; i < products.size(); i++){
        
        if(binary_search(products.begin(), products.end(), n - products[i])){
            c = primes[i];
            d = primes[distance(products.begin(), lower_bound(products.begin(), products.end(), n - products[i]) )];
            break;
        }
    }
    if(c != -1)
        cout << a << " " << b << " " << c << " " << d << endl; 
    else
        cout << "-1";
}
