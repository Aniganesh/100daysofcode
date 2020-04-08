// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/valid-chess-board-028343ac/
// 08-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;
const int N = 1E3 + 5;
string mat[N];

bool valid(int x, int y, int n, int m){
    for(int i = x; i < x+8; i++){
        for(int j = y; j < y+7; j++){
            if(mat[i][j] == mat[i][j + 1] || (i < (x + 7) && mat[i][j] == mat[i + 1][j]))
                return false;
        }
    }
    return true;
}

int main(){
    
    int numCols, numRows, numBoards = 0;
    cin >> numRows >> numCols;
    
    for(int i = 0; i < numRows; i++){
        cin >> mat[i];
    }
    
    for(int i = 0; i <= numRows; i++){
        for(int j = 0; j <= numCols; j++){
            if(i + 8 <= numRows && j + 8 <= numCols && valid(i, j, numRows, numCols))
                numBoards++;
        }
    }
    
    cout << numBoards;
}