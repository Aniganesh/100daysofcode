// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/stevie
// 16-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numElements;
    cin >> numElements;
    vector<int> array1(numElements), array2(numElements);
    for(int i = 0; i < numElements;++i){
        cin >> array1[i];
    }

    for(int i = 0; i < numElements;++i){
        cin >> array2[i];
    }
    unordered_map<int, int> RES;
    for(int i = 0; i < numElements; ++i){
        RES[array1[i]] = max(RES[array1[i]], array2[i]);
    }
    for(int i = 0; i < numElements; ++i)
        cout << RES[array1[i]] << " ";
}