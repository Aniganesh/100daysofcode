// https://www.hackerearth.com/problem/algorithm/battlefield-and-gas-03a09a76/
// 04-07-2020 Very-easy/easy
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
        ll sum = 0;
        ll numSoldiers, strength;
        cin >> numSoldiers;
        bool atleastOneSoldier = false;

        while(numSoldiers--){
            cin >> strength;
            if(strength > 0){
                atleastOneSoldier = true;
                sum += strength;
            }
        }
        ll val = (sum&(sum-1));
        if(atleastOneSoldier && !val){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}