// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/ram-and-shyam-buy-crackers-de722684/
// 12-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numFirecrackers;
    cin >> numFirecrackers;
    int costs[numFirecrackers];

    for(int i = 0; i < numFirecrackers; ++i){
        cin >> costs[i];
    }
    
    set<int> ans;
    
    for(int i = 1; i < (1<<numFirecrackers); ++i){
        int val = 0;
    
        for(int j = 0; j < numFirecrackers; ++j){
            if(i & (1<<j)){
                val += costs[j];
            }
        }
    
        if(val%2 == 0){
            ans.insert(val);
        }
    }

    cout << ans.size();
}