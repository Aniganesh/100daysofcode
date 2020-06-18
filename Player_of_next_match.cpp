// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/ankits-no-ed95054d/
// 19-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numNums;
        cin >> numNums;
        ll RES = 0, givenNum;
        
        while(numNums--){
            cin >> givenNum;
            RES += (givenNum&-givenNum);
        }
        
        cout << RES << endl;
    }
}