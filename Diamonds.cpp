// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/diamonds-4
// 07-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numRows, numCols;
        cin >> numRows >> numCols;
        char windows[numRows][numCols];
        
        for(int row = 0; row < numRows; row++)
            for(int col = 0; col < numCols; col++)
                cin >> windows[row][col];
        
        int numDiamonds = 0;
        
        for(int row = 0; row < numRows - 1; row++)
            for(int col = 0; col < numCols - 1; col++)
                if(windows[row][col] == '/' && windows[row][col+1] == '\\' && windows[row+1][col] == '\\' && windows[row+1][col+1] == '/')
                    numDiamonds++;
        
        cout << numDiamonds << endl;
    }
}