// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/city-group-3/
// 31-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int numCities, numGroups, numQueries, cityA, cityB;
    cin >> numCities >> numGroups;
    int *cityGroupMapping = new int[numCities];
    for(int i = 0; i < numGroups; i++){
        int numCitiesInGroup, city;
        cin >> numCitiesInGroup;
        for(int j = 0; j < numCitiesInGroup; j++){
            cin >> city;
            cityGroupMapping[city-1] = i;
        }
    }
    cin >> numQueries;
    for(int i = 0; i < numQueries; i++){
        cin >> cityA >> cityB;
        if(cityGroupMapping[cityA-1] == cityGroupMapping[cityB-1])
            cout << 0 << endl;
        else
            cout << min(abs(cityGroupMapping[cityA-1]-cityGroupMapping[cityB-1]), abs(numGroups-abs(cityGroupMapping[cityA-1]-cityGroupMapping[cityB-1]))) << endl;
    }
}