// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/xorsum/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

vector<int> to_binary(ll number){
    vector<int> BINARY;
    //The result is in reverse. Correction is not done since it is not necessary for this problem.
    while(number){
        BINARY.push_back(number%2);
        number /= 2;
    }
    return BINARY;
}

int main(){
    cin.tie();
    ios::sync_with_stdio();

    int testcases;
    cin >> testcases;
    while(testcases--){
        ll limit;
        cin >> limit;
        vector<int> bin = to_binary(limit);
        ll numZeroes = count(bin.begin(), bin.end(), 0);
        ll res = 1;
        //using pow() causes a last digit difference.
        while(numZeroes--){
            res *=3;
        }
        cout << res << endl;
    }
}