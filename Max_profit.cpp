// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/max-profit-7/
// 17-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numDays;
    cin >> numDays;
    int stockPrice[numDays];
    for(int i = 0; i < numDays; i++)
        cin >> stockPrice[i];

    int RES = 0;
    for(int i = 0; i < numDays - 1; i++){
        for(int j = i + 1; j < numDays; j++){
            RES = max(RES, stockPrice[j] - stockPrice[i]);
        }
    }
    cout << RES << endl;
    
}