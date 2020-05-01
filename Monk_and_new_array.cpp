// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-new-array/
// 25-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numRow, numCol;
    ll num;
    cin >> numRow >> numCol;
    vector<vector<ll> > matrix;
    for(int row = 0; row < numRow; row++){
        vector<ll> rowVector;
        for(int col = 0; col < numCol; col++){
            cin >> num;
            rowVector.push_back(num);
        }
        sort(rowVector.begin(), rowVector.end());
        matrix.push_back(rowVector);
    }
    ll RES = LLONG_MAX;
    for(int row = 0; row < numRow - 1; row++){
        for(int col = 0; col < numCol; col++){
            int low = 0;
            int high = numCol - 1;
            int currVal = matrix[row][col];
            // Custom binary search implementation of lower_bound() to get the value 
            // of the largest element lesser than current value i. e., matrix[row][col].
            while(low < high - 1){
                int mid = (low + high) / 2;
                if(matrix[row + 1][mid] < currVal)
                    low = mid;
                else
                    high = mid;
            }
            RES = min(RES, min(abs(currVal - matrix[row + 1][low]), abs(currVal - matrix[row + 1][high])));
        }
    }
    
    cout << RES;
}