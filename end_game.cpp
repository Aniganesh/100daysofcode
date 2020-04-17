// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/end-game/
// 17-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll nbyn, pawnX, pawnY, kingX, kingY, firstMove;
        cin >> nbyn >> pawnY >> pawnX >> kingY >> kingX >> firstMove;
        ll distKingPawn = abs(kingX - pawnX);
        ll kingYAfterdkpMoves = kingY + distKingPawn;
        ll pawnYAfterdkpMoves = pawnY + distKingPawn;
        if(firstMove) pawnYAfterdkpMoves--;
        if(pawnYAfterdkpMoves > kingYAfterdkpMoves || pawnYAfterdkpMoves > nbyn)
            cout << "White Wins\n";
        else
            cout << "Draw\n";
    }
}