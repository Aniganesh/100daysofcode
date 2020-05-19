// 
// 
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    bool isNotPrime[(long long) (1e6)+ 10] = {false};
    for(ll i = 2; i < (1e6)+ 10; ++i){
        if(isNotPrime[i] == false){
            for(ll j = i*i; j < (1e6)+ 10; j += i){
                isNotPrime[j]=true;
            }
        }
    }
    ll num, RES = 1;
    cin >> num;
    ll squareRoot = sqrt(num);
    for(int i = 1; i <= squareRoot; ++i){
        if(i == squareRoot){
            if(num % i == 0 && isNotPrime[i]){
                RES +=2;
            }
        }else{
            RES += (num%i == 0) && isNotPrime[i];
        }
    }
    cout << RES;
}