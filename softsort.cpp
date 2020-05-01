// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/softsort-7/
// 06-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;
ll factorials[10000000] = {0};


ll calcFactorial(ll n){
    if(factorials[n] == 0){
        factorials[n] = (n * calcFactorial(n-1)) MOD;
    }
    return(factorials[n]);
}

int main(){
    factorials[0] = 1;
    ll testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        cout << ((3 * calcFactorial(n)) + 3) MOD << endl;

    }
}