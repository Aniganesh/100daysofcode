// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sagars-learning/
// 13-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll largeNum;
        cin >> largeNum;
        if(largeNum/3 == 0)
            cout << -1 << endl;
        else{
            ll x = largeNum / 3;
            cout << x << " " << 2*x << " " << 3*x << endl;
        }
    }
    

}