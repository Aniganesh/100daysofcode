// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-jhool-and-brute-force-18/
// 18-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int cubes[91] = {0};
    vector<int> cubeSums, notUnique;
    for(int i = 1; i <= 90; i++)
        cubes[i] = pow(i,3);
    for(int i = 0; i < 90; i++){
        for(int j = i+1; j <= 90; j++){
            int cubeSum = cubes[i] + cubes[j];
            if(find(cubeSums.begin(), cubeSums.end(), cubeSum) == cubeSums.end()){
                cubeSums.push_back(cubeSum);
            }else{
                notUnique.push_back(cubeSum);
            }
        }
    }
    set<int> possibleResults(notUnique.begin(), notUnique.end());
    int testcases;
    cin >> testcases;
    while(testcases--){
        int number;
        cin >> number;
        int RES = -1;
        if(number > 1729){
            auto pointer = possibleResults.lower_bound(number);
            RES = *(--pointer);
        }
        cout << RES << endl;
    
    }
}