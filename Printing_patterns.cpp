// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/waves-b18625d7/
// 03-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie();
    cout.tie();
    ios_base::sync_with_stdio();
    int numRows, numCols, centreX, centreY;
    cin >> numRows >> numCols >> centreX >> centreY;
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            cout << max(abs(i-centreX), abs(j-centreY)) << " \n"[j == numCols-1]; // Index value 
        }
    }
    return 0;
}