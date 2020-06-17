// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/maximum-and/
// 17-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

bool isPowerOfTwo(ll num){
    return (num) && (!(num&(num-1)));
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        ll num, m;
        cin >> num >> m;
        if((m-num) == 1){
            cout << (num&m) << endl;
            continue;
        }
        if(isPowerOfTwo(m)){
            cout << m-2 << endl;
            continue;
        }
        if(m&1){
            cout << m-1 << endl;
        }else{
            cout << (m-2) << endl;
        }
    }
}