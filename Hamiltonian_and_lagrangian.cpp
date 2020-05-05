// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/hamiltonian-and-lagrangian/
// 05-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    int values[numValues];
    for(int i = 0; i < numValues; i++){
        cin >> values[i];
    }
    int maxTillI[numValues], maximum = values[numValues-1];
    for(int i=numValues-1; i > -1; i--){
        maximum = max(maximum,values[i]);
        maxTillI[i] = maximum;
    }
    for(int i = 0; i < numValues-1; i++){
        if(values[i] >= maxTillI[i])
            cout << values[i] << " ";
    }
    cout << values[numValues-1];
}