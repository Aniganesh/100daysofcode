// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/wet-clothes-625348cf/
// 20-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numRain, numClothes, numReps;
    cin >> numRain >> numClothes >> numReps;
    int maxDiff = -1;
    
    int rainTimes[numRain];
    for(int i = 0; i < numRain; i++)
        cin >> rainTimes[i];
    /*
    * Calculate the largest gap between two consecutive rain sessions. If the time taken for
    * the cloth to dry is less than or equal to the largest gap, then that cloth can be 
    * collected at that time. 
    */
    for(int i = 0; i < numRain - 1; i++)
        maxDiff = max(maxDiff, rainTimes[i+1] - rainTimes[i]);
    int clothDryTime[numClothes], RES = 0;
    for(int i = 0; i < numClothes; i++){
        cin >> clothDryTime[i];
        if(clothDryTime[i] <= maxDiff)
            RES++;
    }
    cout << RES;
}