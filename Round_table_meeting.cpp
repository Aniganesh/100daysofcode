// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-graphic-game-59c30775/
// 25-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

vector<int> studentsInVarsities[1000001];

int binarySearch(int numElems, int second, int numToFind){
    int low  = 0, high = numElems;
    while(low != high){
        int mid = (low + high) / 2;
        if(studentsInVarsities[second][mid] <= numToFind){
            low = mid + 1;
        }else{
            high = mid;
        }
    }
    return high;
}

int mod(int a){
    if(a < 0)
        return -a;
    else
        return a;
}

int main(){
    int numStudents, numQueries;
    cin >> numStudents >> numQueries;
    int varsities[200005];
    for(int i = 0; i < numStudents; i++){
        cin >> varsities[i];
    }
    for(int i = numStudents; i < 2 * numStudents; i++){
        varsities[i] = varsities[i-numStudents];
    }
    for(int i = 0; i < 2 * numStudents; i++){
        studentsInVarsities[varsities[i]].push_back(i);
    }
    while(numQueries--){
        int minDiff = 200000;
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < studentsInVarsities[a].size();i++){
            int y = binarySearch(studentsInVarsities[b].size(), b, studentsInVarsities[a][i]);
            int val = studentsInVarsities[b][y] - studentsInVarsities[a][i];
            minDiff = min(minDiff, mod(val));
            if(y != 0)
                minDiff = min(minDiff, mod(studentsInVarsities[a][i] - studentsInVarsities[b][y-1]));
        }
        cout << minDiff/2 << endl;
    }
}