// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/fill-the-boxes-922504c8/
// 21-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    ios_base::sync_with_stdio(false);
    cout.tie(false);

    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numBoxes, numBalls, tolerance;
        cin >> numBoxes >> numBalls >> tolerance;
        int currBoxCapacity, ballWeights[numBalls];
        pair<int, int> boxCapacityRange[numBoxes];

        for(int i = 0; i < numBoxes;++i){
            cin >> currBoxCapacity;
            boxCapacityRange[i] = {currBoxCapacity, currBoxCapacity+tolerance};
        }

        for(int i = 0; i < numBalls; ++i){
            cin >> ballWeights[i];
        }

        sort(boxCapacityRange, boxCapacityRange+numBoxes);

        sort(ballWeights, ballWeights+numBalls);
        
        int boxPointer = 0, ballPointer = 0, numBoxesFilled = 0;
        while(boxPointer < numBoxes && ballPointer < numBalls){
            if(ballWeights[ballPointer] >= boxCapacityRange[boxPointer].first && ballWeights[ballPointer] <= boxCapacityRange[boxPointer].second){
                ++ballPointer;
                ++boxPointer;
                ++numBoxesFilled;
                continue;
            }
            if(ballWeights[ballPointer] > boxCapacityRange[boxPointer].second){
                ++boxPointer;
            }else{
                ++ballPointer;
            }
        }
        cout << numBoxesFilled << endl;
    }
}
