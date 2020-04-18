// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/counter-strike-12/
// 18-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numLocations, numTargets, maxPossDistance;
        cin >> numLocations >> numTargets >> maxPossDistance;
        vector<pair<int, int> > locations(numLocations);
        for(int i = 0; i < numLocations; i++){
            cin >> locations[i].first >> locations[i].second;
        }
        vector<pair<int, int> > targets(numTargets);
        for(int i = 0; i < numTargets; i++)
            cin >> targets[i].first >> targets[i].second;
        string RES = "NO\n";
        int numDoable = 0;
        for(int i = 0; i < numTargets; i++){
            for(int j = 0; j < numLocations; j++){
                int manhattanDistance = abs(targets[i].first - locations[j].first);
                manhattanDistance += abs(targets[i].second - locations[j].second);
                if(manhattanDistance <= maxPossDistance){
                    numDoable++;
                    break;
                }
            }
            if(numDoable >= numTargets / 2){
                RES = "YES\n";
                break;
            }
        }
        cout << RES;
    }
}