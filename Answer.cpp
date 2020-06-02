// https://www.hackerearth.com/problem/algorithm/answer/
// 02-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string itemDemanded;
    cin >> itemDemanded;
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        ll pos1, pos2;
        cin >> pos1 >> pos2;
        --pos1;
        --pos2;

        if(itemDemanded[pos1%itemDemanded.length()] == itemDemanded[pos2%itemDemanded.length()]){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }

    }

    return 0;
}