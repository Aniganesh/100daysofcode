// https://www.hackerearth.com/problem/algorithm/oddoneout/
// 31-05-2020 - Very-easy/easy
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
        string num;
        cin >> num;
        cout << count(num.begin(), num.end(), '0') << endl;
    }
}