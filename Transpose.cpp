// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/tutorial/
// 07-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numRows, numCols;
    cin >> numRows >> numCols;
    int matrix[numCols][numRows];

    for(int row = 0; row < numRows; ++row){
        for(int col = 0; col < numCols; ++col){
            cin >> matrix[col][row];
        }
    }

    for(int i = 0; i < numCols; ++i){
        for(int j = 0; j < numRows; ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
