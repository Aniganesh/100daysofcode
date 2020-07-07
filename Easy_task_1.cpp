// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/easy-task-1/
// 07-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numValues;
    cin >> numValues;
    vector<int> A(numValues), B(numValues);
    
    for(int i = 0; i < numValues; ++i){
        cin >> A[i];
    }

    for(int i = 0; i < numValues; ++i){
        cin >> B[i];
    }

    map<int, int> val;
    for(int i = 0; i < numValues; ++i){
        val[A[i]] = max(B[i], val[A[i]]);
    }
    for(int i = 0; i < numValues; ++i){
        cout << val[A[i]] << " ";
    }
    return 0;
}