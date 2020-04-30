// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/alice-and-escalator/
// 30-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

ll sumMatrix[1005][1005];

ll getSubMatrixSum(ll i, ll j, ll m){
    return sumMatrix[i][j] - sumMatrix[i-m][j] - sumMatrix[i][j-m] + sumMatrix[i-m][j-m];
}

int main(){
    ll numRows, numCols, maxSum;
    cin >> numRows >> numCols >> maxSum;
    ll grid[numRows + 1][numCols + 1];
    for(int row = 1; row <= numRows; row++){
        for(int col = 1; col <= numCols; col++){
            cin >> grid[row][col];
        }
    }
    for(ll i = 1; i <= numRows; i++){
        for(ll j = 1; j <= numCols; j++){
            sumMatrix[i][j] = sumMatrix[i-1][j] + sumMatrix[i][j-1] - sumMatrix[i-1][j-1] + grid[i][j];
        }
    }
    ll RES = 0;
    for(ll i = 1; i <= numRows; i++){
        for(ll j = 1; j <= numCols; j++){
            ll low = 0, high = min(i,j);
            while(low <= high){
                ll mid = (low + high) / 2;
                ll subSum = getSubMatrixSum(i, j, mid);
                if(subSum <= maxSum){
                    RES = max(RES, mid*mid);
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
    }
    cout << RES;
}
