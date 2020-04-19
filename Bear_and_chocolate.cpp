// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bear-and-chocolate/
// 19-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numRowCol;
        cin >> numRowCol;
        char chocolate[numRowCol][numRowCol];
        vector<int> numCherryInRow(numRowCol), numCherryInCol(numRowCol);
        for(int row = 0; row < numRowCol; row++){
            for(int col = 0; col < numRowCol; col++){
                cin >> chocolate[row][col];
                if(chocolate[row][col] == '#'){
                    numCherryInCol[col]++;
                    numCherryInRow[row]++;
                }
            }
        }
        bool canSplit;
        for(int i = 0; i < numRowCol; i++){
            canSplit = (accumulate(numCherryInRow.begin(), numCherryInRow.begin() + i, 0) - accumulate(numCherryInRow.begin() + i, numCherryInRow.end(), 0)) == 0;
            if(canSplit){
                cout << "YES\n";
                break;
            }
            canSplit = (accumulate(numCherryInCol.begin(), numCherryInCol.begin()+i, 0) - accumulate(numCherryInCol.begin()+i, numCherryInCol.end(),0)) == 0;
            if(canSplit){
                cout << "YES\n";
                break;
            }
        }
        if(!canSplit)
            cout << "NO\n";
    }
}