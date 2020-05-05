// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
// 05-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numValues, minVal;
        cin >> numValues >> minVal;
        int values[numValues];
        for(int i = 0; i < numValues; i++){
            cin >> values[i];
        }
        sort(values, values+numValues);
        int bound = lower_bound(values, values+numValues, minVal) - values;
        int RES = 0;
        for(int i = 0; i < bound; i++){
            RES = max(RES, abs(values[i]-minVal));
        }
        cout << RES << endl;
    }
}