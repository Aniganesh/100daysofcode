// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/playing-with-given-numbers/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    cin.tie();
    cin.sync_with_stdio();
    ll numElements, numQueries;
    cin >> numElements >> numQueries;
    ll arr[numElements+1];
    arr[0] = 0;
    
    for(ll i = 1; i <= numElements; i++){
        cin >> arr[i];
        arr[i] = arr[i-1]+arr[i];
    }

    while(numQueries--){
        ll left, right;
        cin >> left >> right;
        cout << (arr[right] - arr[left-1])/(right-(left-1)) << endl;
    }    
}