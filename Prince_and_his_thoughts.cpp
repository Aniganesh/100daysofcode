// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/prince-and-his-thoughts/
// 15-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements;
        cin >> numElements;
        int arr[numElements];
        for(int i = 0; i < numElements; i++){
            cin >> arr[i];
        }
        if(arr[0]&1 && arr[numElements-1]&1 && numElements&1)
            cout << "Yes" << endl;
        else
            cout <<"No" << endl;
    }
}