// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/counting-strings/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string input;
        cin >> input;
        ll total_invalid = 0, len = input.length();
        for(int i = 0; i < len; i++){
            ll not_valid = 0;
            while(input[i] != 'a' && input[i] != 'z' && i < len){
                not_valid++;
                i++;
            }
            not_valid = (not_valid*(not_valid+1)) / 2;
            total_invalid += not_valid;
        }
        cout << (len*(len+1))/2 - total_invalid << endl;
    }
}