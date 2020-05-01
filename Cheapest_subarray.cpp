// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cheapest-subarray-d628cb65/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements, minCost = INT_MAX;
        cin >> numElements;
        vector<int> elements(numElements);
        for(int i = 0; i < numElements; i++){
            cin >> elements[i];
        }
        
        for(int i = 0; i < numElements-1; i++){
            minCost = min(minCost, elements[i]+elements[i+1]);
        }
        cout << minCost << endl;
    }
}