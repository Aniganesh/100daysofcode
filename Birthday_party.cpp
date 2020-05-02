// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/
// 02-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int friends, numChoc;
        cin >> friends >> numChoc;
        if(numChoc % friends == 0){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}