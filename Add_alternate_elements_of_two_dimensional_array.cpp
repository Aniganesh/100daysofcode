// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/add-alternate-elements-of-2-dimensional-array/
// 13-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int values[9];
    for(int i = 0; i < 9; ++i){
        cin >> values[i];
    }
    int sum = 0, sum2 = 0;
    for(int i = 0; i < 9; i += 2){
        sum += values[i];
    }
    for(int i = 1; i < 9; i += 2){
        sum2 += values[i];
    }
    cout << sum << endl << sum2 << endl;
}