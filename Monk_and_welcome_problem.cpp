// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/
// 05-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    int values[numValues], values2[numValues];
    for(int i = 0; i < numValues; i++){
        cin >> values[i];
    }
    for(int i = 0; i < numValues; i++){
        cin >> values2[i];
    }
    for(int i = 0; i < numValues; i++){
        cout << values[i] + values2[i] << " ";
    }
}