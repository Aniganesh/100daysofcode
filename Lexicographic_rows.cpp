// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lexographic-rows-c0c0b337/
// 25-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numRows, numCols;
    cin >> numRows >> numCols;
    
    vector<string> matrix(numRows);

    for(int i = 0; i < numRows; ++i){
        cin >> matrix[i];
    }
    
    bool del[101] = {false};
    int RES = 0;

    for(int col = 0; col < numCols; ++col){
        bool toDel = false;
        for(int row = 1; row < numRows; ++row){
            if(matrix[row][col] < matrix[row-1][col]){
                toDel = true;
                for(int k = 0; k <= col-1; ++k){
                    if(!del[k]){
                        if(matrix[row][k] > matrix[row-1][k]){
                            toDel = false;
                            break;
                        }
                    }
                }
            }
        }
        del[col] = toDel;
        RES +=toDel;    
    }
    cout << RES;
    return 0;
}