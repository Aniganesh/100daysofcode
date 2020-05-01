// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-enlightened-ones/
// 01-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

vector<int> templePositions;

bool checkIfRangeEnough(int range, int numMonks){
    int prevMonkPosition = templePositions[0]+range;
    numMonks--;
    for(int i = 1; i < templePositions.size(); i++){
        if(prevMonkPosition+range >= templePositions[i])
            continue;
        if(numMonks == 0)
            return false;
        prevMonkPosition = templePositions[i]+range;
        numMonks--;
    }
    return true;
}

int main(){
    int numTemples, numMonks;
    cin >> numTemples >> numMonks;
    templePositions.resize(numTemples);
    for(int i = 0; i < numTemples; i++){
        cin >> templePositions[i];
    }
    sort(templePositions.begin(), templePositions.end());

    int low = 0, high = 1e7;
    int mid;
    while(low <= high){
        mid = (low + high) >> 1;
        if(checkIfRangeEnough(mid, numMonks) && checkIfRangeEnough(mid-1, numMonks) == false)
        break;
        if(checkIfRangeEnough(mid, numMonks)){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << mid << endl;
}
