// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pile-of-coins-d33de897/
// 14-04-2020 Very-easy/easy

// If either of the two piles contains even number of coins, Ashish wins. Otherwise Jeel does.

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool isEven(int num){
    if(num % 2 == 0)
        return true;
    return false;
}

int main(){
    int testcases;
    cin >> testcases;

    while(testcases--){
        long coins1, coins2;
        cin >> coins1 >> coins2;
        if(isEven(coins1) || isEven(coins2))
            cout << "Ashish" << endl;
        else
            cout << "Jeel" << endl;
    }
}