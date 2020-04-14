// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/power-failure/
// 14-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

long long arr [100000 + 1];
bool primes[100000 + 10];
int numPrimes[100000 + 10];

int N = 100000 + 10;


// The following is an implementation of sieve of erastothenes
// Ref: https://www.geeksforgeeks.org/sieve-of-eratosthenes/
void erastothenes(){                               

    for(long long i = 2; i * i <= N; i++){
        if(!primes[i]){
            for( long long j = i * i; j <= N; j+= i){
                primes[j] = true;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        numPrimes[i] += numPrimes[i - 1] + !primes[i];
    }

}

int main(){
    erastothenes();
    ll testcases, res;
    cin >> testcases;
    while(testcases--){
        res = 1;
        int numVoltages, maxAvailable;
        cin >> numVoltages >> maxAvailable;
        int volt[numVoltages];
        for(int i = 0; i < numVoltages; i++) cin >> volt[i];

        sort(volt, volt+numVoltages, greater<int>());

        for(int i = 0; i < numVoltages; i++){

            long long subtract = numPrimes[maxAvailable] - numPrimes[volt[i] - 1];
            long long ways = maxAvailable - volt[i] + 1 - subtract - i;

            if(ways < 0){                                 
                //not possible;
                res = 0;
                break;
            }
            res = ( res MOD * ways MOD) MOD;
        }
        cout << res << endl;
    }
}