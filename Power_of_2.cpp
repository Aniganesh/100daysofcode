// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/power-of-2-6/
// 13-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numNumbers;
    cin >> numNumbers;
    int canRepresentAsPow2 = 0;
    ll num;

    while(numNumbers--){
        cin >> num;
        canRepresentAsPow2 += __builtin_popcount(num) == 1;
        // If number of set bits is 1, then the number is expressed as power of 2
    }

    cout << canRepresentAsPow2 << endl;
}