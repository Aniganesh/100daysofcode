// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/can-you-guess/
// 19-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

// The answer is for every input, find the sum of its factors.
int main(){
    vector<int> sumFactors(1e6, 1);
    // int i, j;
    for(int i = 2; i <= 1e6; ++i){
        for(int j = 2*i; j <= 1e6; j+=i){
            sumFactors[j] += i;
        }
    }
    sumFactors[1] = 0;
    int numTests;
    cin >> numTests;
    while(numTests--){
        int value;
        cin >> value;
        cout << sumFactors[value] << endl;
    }
}