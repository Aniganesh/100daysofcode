// hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/brick-and-building-26cc28f2/
// 13-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    cin.tie();
    ios::sync_with_stdio();
    ll numBuildings; 
    cin >> numBuildings;
    ll numBuildingsCanBeBuilt[100005] = {0};
    int buildingHeight;
    while(numBuildings--){
        cin >> buildingHeight;
// Get current building height. For this building, check all possible brick heights.
// If it can be built with brick height a, increase count for numBuildingsCanBeBuilt[brickheight] and numBuildingsCanBeBuilt[buildingHeight / brickHeight].
// Explanation for numBuildingsCanBeBuilt[buildingHeight / brickHeight]++:
/*
Assume building height is 10 and we are currently checking for brick height 2. The 
building can be built by bricks of height 2 and 5. That is why numBuildingsCanBeBuilt[buildingHeight / brickHeight]++ is used. 
*/
        for(int heightofBrick = 1; heightofBrick <= sqrt(buildingHeight); heightofBrick++){
            if(buildingHeight % heightofBrick == 0){
                if(buildingHeight / heightofBrick == heightofBrick)
                    numBuildingsCanBeBuilt[heightofBrick]++;
                else{
                    numBuildingsCanBeBuilt[buildingHeight / heightofBrick]++;
                    numBuildingsCanBeBuilt[heightofBrick]++;
                }
            }
        }
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int brickHeight;
        cin >> brickHeight;
        cout << numBuildingsCanBeBuilt[brickHeight] << endl;
    }
    
}