// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/fredo-is-in-a-hurry/
// 06-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll n;
        cin >> n;
        if(n==1){cout<<"1\n";continue;}
		ll x = floor((-3.0+sqrt(9.0+8.0*double(n)))/2.0);
        cout << 2*(n-x) << endl;
    }
}