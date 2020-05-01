// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/recursive-sums/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int numBlocks;
        cin >> numBlocks;
        ll sum = 0;
        while(numBlocks--){
            ll digit, repetitions;
            cin >> repetitions >> digit;
            sum += digit*repetitions;
            if(sum%9 == 0 && sum != 0)
                sum = 9;
            else
                sum %= 9;
        }
        cout << sum << endl;    
    }
}