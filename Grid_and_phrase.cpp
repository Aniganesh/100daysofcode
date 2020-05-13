// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/jadvaliioo-62280ff6/
// 13-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numRows, numCols;
    cin >> numRows >> numCols;
    char grid[numRows][numCols];
    for(int row = 0; row < numRows; ++row){
        for(int col = 0; col < numCols; ++col){
            cin >> grid[row][col];
        }
    }
    int numSaba = 0;

    for(int i = 0; i < numRows; ++i){
        for(int j = 0; j < numCols-3; ++j){
            if(grid[i][j] == 's' && grid[i][j+1] == 'a' && grid[i][j+2] == 'b' && grid[i][j+3] == 'a'){
                ++numSaba;
                // cout << "ltr\n";
            }
        }
    }
    
    for(int i = 0; i < numRows-3; ++i){
        for(int j = 0; j < numCols; ++j){
            if(grid[i][j] == 's' && grid[i+1][j] == 'a' && grid[i+2][j] =='b' && grid[i+3][j] == 'a'){
                ++numSaba;
                // cout << "ttb\n";
            }
        }
    }
    
    for(int i = 0; i < numRows - 3; ++i){
        for(int j = 0; j < numCols - 3; ++j){
            if(grid[i][j] == 's' && grid[i+1][j+1] == 'a' && grid[i+2][j+2] =='b' && grid[i+3][j+3] == 'a'){
                ++numSaba;
                // cout << "diagttb\n";
            }
        }
    }

    for(int i = numRows-1; i - 3 > -1; --i){
        for(int j = 0; j < numCols-3; ++j){
            if(grid[i][j] == 's' && grid[i-1][j+1] == 'a' && grid[i-2][j+2] == 'b' && grid[i-3][j+3] == 'a'){
                ++numSaba;
                // cout << "diagbtt\n";
            }
        }
    }

    cout << numSaba;
}