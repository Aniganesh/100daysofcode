// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-the-earning-137963bc-323025a6/
// 06-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numBuildings, perBuildingWage;
        cin >> numBuildings >> perBuildingWage;
        int buildingHeights[numBuildings];
        for(int i = 0; i < numBuildings; i++){
            cin >> buildingHeights[i];
        }
        int currMax = buildingHeights[0], numBuildingsCommunicated = 1;
        for(int i = 1; i < numBuildings; i++){
            if(buildingHeights[i] > currMax){
                currMax = buildingHeights[i];
                ++numBuildingsCommunicated;
            }
        }
        cout << numBuildingsCommunicated * perBuildingWage << endl;
    }
}