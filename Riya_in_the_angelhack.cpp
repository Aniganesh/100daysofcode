// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/dummy1-1/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    ll num;
    cin >> num;
    if(num%15 == 0)
        cout << "AngelHack!";
    else if(num % 3  == 0)
        cout << "Angel";
    else if(num % 5 == 0)
        cout << "Hack";
    else
        cout << num;
}