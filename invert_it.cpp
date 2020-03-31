// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/invert-it-b06fd53a/
// 31-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    long long numElements, numSegments, minReq;
    while(testcases--){
        cin >> numElements >> numSegments >> minReq;
        long long num,res;
        if(numSegments > 1) res = LLONG_MAX; else res = 0;
        for(int i = 0; i < numElements; i++) {
            cin >> num;
            if (numSegments > 1)
                res = min(res, num);
            else
                res = max(res, num);         
        }
        if(res > minReq){
            cout << "NO" << endl;
        }
        else
            cout << res << endl;
    }
}