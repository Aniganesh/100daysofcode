// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/wrestling-match/
// 30-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numWrestlers, numPairs;
    cin >> numWrestlers >> numPairs;
    int wrestlerStrength[numWrestlers],  wrestlerStrengthSorted[numWrestlers];
    for(int i = 0; i < numWrestlers; i++){
        cin >> wrestlerStrength[i];
        wrestlerStrengthSorted[i] = wrestlerStrength[i];
    }
    sort(wrestlerStrengthSorted, wrestlerStrengthSorted + numWrestlers);
    vector<int> friendsWithLowStrength[numWrestlers];
    for(int i = 0; i < numPairs; i++){
        int wrestler1, wrestler2;
        cin >> wrestler1 >> wrestler2;
        --wrestler1, --wrestler2;
        if(wrestlerStrength[wrestler1] < wrestlerStrength[wrestler2])
            friendsWithLowStrength[wrestler2].push_back(wrestler1);
        if(wrestlerStrength[wrestler2] < wrestlerStrength[wrestler1])
            friendsWithLowStrength[wrestler1].push_back(wrestler2);
    }
    for(int i = 0; i < numWrestlers; i++){
        int RES = 0; // number of opponents ith wrestler can beat
        int pos = lower_bound(wrestlerStrengthSorted, wrestlerStrengthSorted+numWrestlers, wrestlerStrength[i]) - wrestlerStrengthSorted;
        RES += pos; // number of opponents who have lower strength than him.
        RES -= friendsWithLowStrength[i].size(); // remove number of friends with low strength;
        RES = max(RES, 0); // If only his friends can be beaten by him.
        cout << RES << " ";
    }
}