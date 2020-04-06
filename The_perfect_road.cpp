// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bobalice-and-the-perfect-road-1-3f60abdf/
// 06-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;



int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int start, end, numPaths, temp;
        cin >> start >> end >> numPaths;
        vector<pair<int, int>> paths;
        for(int i = 1; i <= numPaths; i++){
            cin >> temp;
            paths.push_back(make_pair(temp, i));
        }
        sort(paths.begin(), paths.end(), greater<pair<int, int>>());
        if(paths[0].first==paths[1].first)
            cout << "Many Roads" << endl;
        else
            cout << paths[0].second << endl;
    }
}