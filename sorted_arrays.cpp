// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/killjee-and-sorted-array-ae92a57f/
// 04-05-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll numElements;
    cin >> numElements;
    ll Array[numElements];
    for(ll i = 0; i < numElements; i++)
        cin >> Array[i];
    ll count = 0;
    for(ll i = 0; i < numElements - 1; i++){
        if(Array[i] >= Array[i+1]){
            count += ((Array[i] - Array[i + 1]) + 1) % 1000000007;
            Array[i+1] = Array[i] + 1;
        }
    }
    
    cout << count;
}