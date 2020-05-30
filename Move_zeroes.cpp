// https://www.hackerearth.com/problem/algorithm/move-zeroes-5/submissions/
// 30-05-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numValues;
    cin >> numValues;
    
    int numZeroes = 0;

    while(numValues--){
        int val;
        cin >> val;
        if(val != 0)
            cout << val << endl;
        else
            ++numZeroes;
    }
    
    while(numZeroes--){
        cout << "0\n";
    }
    
    return 0;
}