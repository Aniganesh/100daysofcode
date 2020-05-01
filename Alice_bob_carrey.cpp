// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/alice-bob-carrey-abc/
// 27-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTurns;
    cin >> numTurns;
    ll sumGems[numTurns+1] = {0}, totalGems = 0;;
    ll numGemsInIthTurn;
    for(int i = 1; i <= numTurns; i++){
        cin >> numGemsInIthTurn;
        totalGems += numGemsInIthTurn;
        sumGems[i] = sumGems[i - 1] + numGemsInIthTurn;
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int gemNum;
        cin >> gemNum;
        gemNum--;
        int turn = lower_bound(sumGems, sumGems+numTurns, totalGems - gemNum) - sumGems;
        if(turn & 1)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
}