// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/furniture-transportation-2/
// 08-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    long numPackages, maxLoss, numToChoose;
    cin >> numPackages >> maxLoss >> numToChoose;
    ll packageValue[numPackages];

    for(int i = 0; i < numPackages; i++)
        cin >> packageValue[i];
    bool flag = false;
    ll combos = 0;
    for(int i = 0; i <= numPackages-numToChoose; i++){
        for(int j = i; j < i+numToChoose; j++){
            if(packageValue[j] > maxLoss){
                flag = true;
                break;
            }
        }
        if(!flag)
            combos++;
        flag = false;
    }
    cout << combos;
}