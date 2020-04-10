// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/strings-1/
// 10-04-2020 Very-easy/easy
// If n^m is equal to m^n. Then answer is yes, no otherwise. This is true only in the case of 2,4 and when both n and m are 1
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string n, m;
        cin >> n >> m;
        if (n == m || (n == "2" && m == "4") || (m == "2" && n == "4"))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}