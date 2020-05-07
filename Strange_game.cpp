// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/strange-game-1-7e758acb-1bff10f0/
// 07-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numCards, runningTime;
        cin >> numCards >> runningTime;
        ll aliceCards[numCards], bobMax = 0, bobCurrent;
        ll totTimeTaken = 0;
        for(int i = 0; i < numCards; i++){
            cin >> aliceCards[i];
        }
        for(int i = 0; i < numCards; i++){
            cin >> bobCurrent;
            bobMax = max(bobCurrent, bobMax);
        }
        for(int i = 0; i < numCards; i++){
            if(aliceCards[i] <= bobMax){
                totTimeTaken += (bobMax+1 - aliceCards[i]) * runningTime;
            }
        }
        cout << totTimeTaken << endl;
    }
}