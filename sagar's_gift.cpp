// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sagars-gift-6/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numNumbers;
        cin >> numNumbers;
        string num, cat;
        cin >> num;
        for(int i = 1; i < numNumbers; i++){
            cin >> cat;
            num += cat;
        }
        sort(num.begin(), num.end(), greater<char>());
        cout << num << endl;
    }    
}