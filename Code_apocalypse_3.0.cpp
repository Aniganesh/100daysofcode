// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/code-apocalypse-30-coming-soon/
// 01-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        ll numBaseSoldiers, initialApplesAvailable, applesPerUpgrade, applesPerSoldierSold;
        cin >> numBaseSoldiers >> initialApplesAvailable >> applesPerUpgrade >> applesPerSoldierSold;
        ll low = 0, high = numBaseSoldiers, numUpgraded;
        while(low <= high){
            ll attemptToUpgrade = (low + high) / 2; 
            ll numSoldiersSold = numBaseSoldiers - attemptToUpgrade;
            ll numApplesAvailable = initialApplesAvailable + numSoldiersSold * applesPerSoldierSold;
            if(attemptToUpgrade * applesPerUpgrade <= numApplesAvailable){
                numUpgraded = attemptToUpgrade;
                low = attemptToUpgrade + 1;
            }else{
                high = attemptToUpgrade - 1;
            }
        }
        cout << numUpgraded << endl;
    }
}
