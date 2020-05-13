// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/the-wealthy-landlord/
// 13-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numRows, numCols;
        cin >> numRows >> numCols;
        string stringToFind;
        vector< map<char, int>> alphaFreq(10005);
        char current;
        for(int i = 0; i < numRows; ++i){
            for(int j = 0; j < numCols;++j){
                cin >> current;
                ++alphaFreq[i][current];
            }
        }
        cin >> stringToFind;
        bool canConstructString = true;
        for(int i = 0; i < stringToFind.length(); ++i){
            int pos = i % numRows;
            if(alphaFreq[pos][stringToFind[i]]) 
                --alphaFreq[pos][stringToFind[i]];
            else
                canConstructString = false;
        }
        cout << (canConstructString? "Yes\n": "No\n");
    }
}