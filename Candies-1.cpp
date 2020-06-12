// https://www.hackerearth.com/problem/algorithm/candies-1/
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
        ll numKids, totalCandies = 0;
        cin >> numKids;

        for(ll i = 0; i < numKids; ++i){
            ll candiesBrought;
            cin >> candiesBrought;
            totalCandies += candiesBrought;
        }

        if(totalCandies % numKids == 0){
            cout << "YES\n" << totalCandies/numKids << " 0\n";
        }else{
            cout << "NO\n" << totalCandies/numKids << " " << totalCandies%numKids << endl;
        }

    }

    return 0;
}
