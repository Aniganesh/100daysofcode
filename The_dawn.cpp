// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/title-abhi-socha-nahi/
// 05-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll testNum, sum, i;
    cin >> testNum;
    for(i = sqrt(testNum); testNum % i != 0 ; i--);
    sum = i + (testNum/i);
    cout << sum << endl;
}