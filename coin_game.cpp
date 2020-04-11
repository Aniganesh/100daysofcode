// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/coin-game-3-1762eeeb/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        ll numPiles;
        cin >> numPiles;
        ll pile, numMoves = 0;
        for(int i = 0; i < numPiles; i++){
            cin >> pile;
            while(pile % 2 == 0 && pile > 1){
                numMoves++;
                pile /= 2;
            }
        }
        if(numMoves & 1)
            cout << "Charlie" << endl;
        else
            cout << "Alan" << endl;
    }
}