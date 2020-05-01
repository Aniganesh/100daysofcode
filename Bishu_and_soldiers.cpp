// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/
// 23-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numSoldiers;
    cin >> numSoldiers;
    vector<int> soldierPowers(numSoldiers);
    for(int i = 0; i < numSoldiers; i++){
        cin >> soldierPowers[i];
    }
    sort(soldierPowers.begin(), soldierPowers.end());
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int bishuPower;
        cin >> bishuPower;
        int numKilled = 0, sumKilledPowers = 0;
        for(int i = 0; i < numSoldiers; i++){
            if(soldierPowers[i] <= bishuPower)
                numKilled++, sumKilledPowers += soldierPowers[i];
            else
                break;
        }
        cout << numKilled << " " << sumKilledPowers << endl;
    }
}