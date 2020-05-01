// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/c-impresses-everyone/
// 25-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTurns;
    cin >> numTurns;
    int sumStones[numTurns+1] = {0}, totalStones = 0;;
    int numStonesInIthTurn;
    for(int i = 1; i <= numTurns; i++){
        cin >> numStonesInIthTurn;
        totalStones += numStonesInIthTurn;
        sumStones[i] = sumStones[i - 1] + numStonesInIthTurn;
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int stoneNum;
        cin >> stoneNum;
        stoneNum--;
        int turn = lower_bound(sumStones, sumStones+numTurns, totalStones - stoneNum) - sumStones;
        if(turn & 1)
            cout << "A\n";
        else
            cout << "B\n";
    }
}