// https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/tutorial/
// 03-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int leftDiagonal[30], rightDiagonal[30], column[30];

bool solveNQueens(bool board[10][10], int col, int n){
    // cout << "called\n";
    if(col >= n){
        return true;
    }
    
    for(int i = 0; i < n; ++i){
        if(leftDiagonal[i-col+n-1] != true && rightDiagonal[i+col] != true && column[i] != true){
            board[i][col] = true;
            leftDiagonal[i-col+n-1] = rightDiagonal[i+col] = column[i] = true;
            if(solveNQueens(board, col+1, n))
                return true;
            board[i][col] = false;
            leftDiagonal[i-col+n-1] = rightDiagonal[i+col] = column[i] = false;
        }
    }

    return false;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    bool board[10][10] = {false};

    if(solveNQueens(board, 0, n) == false){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
}