// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
// 13-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numRows;
        cin >> numRows;
        char image[numRows][numRows];
        for(int row = 0; row < numRows; ++row){
            for(int col = 0; col < numRows; ++col){
                cin >> image[row][col];
            }
        }
        
        bool answered = false;
        for(int row = 0; row <= numRows / 2; ++row){
            for(int col = 0; col <= numRows / 2; ++col){
                if(image[row][col] != image[numRows-row-1][col] || image[row][col] != image[row][numRows-col-1]){
                    answered = true;
                    cout << "NO\n";
                    break;
                }
            }
            if(answered)
                break;
        }
        if(!answered){
            cout << "YES\n";
        }
    }
    return 0;
}