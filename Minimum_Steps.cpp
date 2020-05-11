// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/step-conversion/
// 11-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

long solve(long number, long target, long multiplier){
    if(number >= target){
        return ( (number-target)/2 + (number-target)%2);
    }
    if(target % multiplier == 0){
        return(1 + solve(number, target/multiplier, multiplier));
    }
    long temp = (target/multiplier+1)*multiplier;
    return ((temp-target) / 2 + (temp-target) % 2 + solve(number, temp, multiplier));
}

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        long number, target, multiplier;
        cin >> number >> target >> multiplier;
        cout << solve(number, target, multiplier) << endl;
    }
}