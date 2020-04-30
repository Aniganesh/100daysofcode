// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/promotion-1/
// 30-04-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int weightBoxes[int(1e5+5)], maxWeights[int(1e5+5)];
int numBoxes, numTrucks;

bool trucksCanCarryAllBoxes(int numTrips){
    int c = 0, boxesCanBeCarried = 0;
    while(c < numTrucks){
        for(int i = 0; i < numTrips && boxesCanBeCarried < numBoxes && maxWeights[c] >= weightBoxes[boxesCanBeCarried]; i = i + 2)
            boxesCanBeCarried++;
        c++;
    }
    return boxesCanBeCarried == numBoxes;
}

int main(){
    
    cin >> numBoxes >> numTrucks;
    
    for(int i = 0; i < numBoxes; i++)
        cin >> weightBoxes[i];
    for(int i = 0; i < numTrucks; i++)
        cin >> maxWeights[i];
    
    sort(weightBoxes, weightBoxes+numBoxes);
    sort(maxWeights, maxWeights+numTrucks);
    
    int low = 0, high = 2*numBoxes, RES;
    while(low <= high){
        int mid = (low + high) >> 1; //Faster division by 2
        if(trucksCanCarryAllBoxes(mid)){
            RES = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << RES;
    return 0;
}