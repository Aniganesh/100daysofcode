// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/d-30/
// 24-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll numElements, minSum, RES = 0;
        cin >> numElements >> minSum;
        ll elements[numElements], sum[numElements]={0};
        for(int i = 0; i < numElements; i++){
            cin >> elements[i];
        }
        for(int i = 1; i <= numElements; i++){
            sum[i] = sum[i-1] + elements[i-1];
        }
        sort(sum, sum+numElements+1);
        for(int i = 0; i < numElements; i++){
            ll value = sum[i]+minSum;
            ll sumVal = upper_bound(sum, sum+numElements+1, value) - sum;
            RES = RES + (numElements - sumVal + 1);
        }
        cout << RES << endl;
    }
}