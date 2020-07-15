// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/
// 15-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numCars;
        cin >> numCars;
        int maxSpeed[numCars];
        
        for(int i = 0; i < numCars; ++i){
            cin >> maxSpeed[i];
        }

        int currMin = INT_MAX, failed = 0;

        for(int i = 1; i < numCars; ++i){
            currMin = min(currMin, maxSpeed[i-1]);
            if(maxSpeed[i] > currMin){
                maxSpeed[i] = currMin;
                ++failed;
            }
        }

        cout << numCars-failed << endl;
    }
}