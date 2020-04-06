// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/nitish-nikhil-and-natasha-e6374658/
// 06-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

string base9(ll base10){
    if(base10 == 0)
        return "0";
    string BASE9;
    while(base10){
        BASE9.push_back((base10 % 9)+48);
        base10 /= 9;
    }
    reverse(BASE9.begin(), BASE9.end());
    return BASE9;
}

int main(){
   ll n;
    while(!cin.eof()){
        cin >> n;
        cout << base9(n) << endl;
    }
   
}