// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/matrix-symmetry/
// 12-04-2020 Very-easy/easy
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
        string matrix[numRowCol], temp;
        for(int i = 0; i < numRowCol; i++){
            cin >> matrix[i];
        }
        bool vertical_true = true, horizontal_true = true;
        for(int row = 0; row <= numRowCol / 2 + 1; ++row){
            for(int col = 0; col <= numRowCol / 2 + 1; ++col){
                if(matrix[row][col] != matrix[numRowCol-row-1][col] && horizontal_true){
                    horizontal_true = !horizontal_true;
                }
                if(matrix[row][col] != matrix[row][numRowCol-col-1] && vertical_true){
                    vertical_true = !vertical_true;
                }
            }
        }
        if(horizontal_true && vertical_true){
            cout << "BOTH" << endl;
        }else if(horizontal_true){
            cout << "HORIZONTAL" << endl;
        }else if(vertical_true){
            cout << "VERTICAL" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}