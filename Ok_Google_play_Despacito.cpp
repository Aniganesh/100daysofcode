// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/play-despacito
// 07-04-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
    int songLength, distancetowalk;
    cin >> songLength >> distancetowalk;
    if((distancetowalk * 2) % songLength == 0)
        cout << (distancetowalk * 2) / songLength;
    else
        cout << (distancetowalk * 2) / songLength + 1;
}