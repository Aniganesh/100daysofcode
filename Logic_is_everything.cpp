// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/dummy1-3/
// 01-06-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;

    while(numTestcases--){
        int givenNum;
        cin >> givenNum;

        int RES = givenNum % 10;
        if(RES){
            cout << 1 << endl << RES << endl;
        }else{
            cout << 2 << endl;
        }
    
    }
    
    return 0;
}