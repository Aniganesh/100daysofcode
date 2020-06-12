// https://www.hackerearth.com/problem/algorithm/candy/
// 12-06-2020 Very-easy/easy
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
        int numChildren, totalCandies = 0;
        cin >> numChildren;
        
        for(int i = 0; i < numChildren; ++i){
            int candiesBrought;
            cin >> candiesBrought;
            totalCandies += candiesBrought;
        }

        if(totalCandies%numChildren == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}