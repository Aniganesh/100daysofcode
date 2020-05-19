// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/can-you-guess-1/#c229141
// 19-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

string base9(ll a){
    string RES;
    if(a==0)
        RES = "0";
    while(a){
        RES.push_back(a%9 + 48);
        a/=9;
    }
    reverse(RES.begin(), RES.end());
    return RES;
}

int main(){
    ll num;
    while(!cin.eof()){
        cin >> num;
        cout << base9(num) << endl;
    }
}