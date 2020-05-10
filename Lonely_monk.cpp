// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lonely-monk-code-monk/
// 04-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    ll oddAndEvenSumCount[] = {1,0};
    ll RES = 0, sum = 0, value;
    while(numValues--){
        cin >> value;
        // determine if sum of all numbers till now is odd or even
        sum = (sum + value) % 2;
        // increment odd sum if odd or increment even.
        ++oddAndEvenSumCount[sum];
    }
    RES += (oddAndEvenSumCount[0] * (oddAndEvenSumCount[0] - 1)) / 2;
    RES += (oddAndEvenSumCount[1] * (oddAndEvenSumCount[1] - 1)) / 2;
    cout << RES;
}
// Help: https://www.geeksforgeeks.org/find-number-subarrays-even-sum/