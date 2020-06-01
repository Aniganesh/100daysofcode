// https://www.hackerearth.com/problem/algorithm/abc-21/
// 31-05-2020 Very-easy/easy
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
        bool alphaPresent[26] = {false};
        string str;
        cin >> str;
        
        for(char i: str){
            alphaPresent[i-97] = i;
        }
        
        if(accumulate(alphaPresent, alphaPresent+26, 0) == 26){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}