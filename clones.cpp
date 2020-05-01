// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/
// 07-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if((x-(y-1))%2==0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}