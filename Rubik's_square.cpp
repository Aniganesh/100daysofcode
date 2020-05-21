// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rubiks-square-2/submissions/
// 21-05-2020 Medium UnSolved
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numElementsInSide, numRowRotations, numColRotations;
        cin >> numElementsInSide >> numRowRotations >> numColRotations;
        int element[numElementsInSide][numElementsInSide];

        for(int i = 0; i < numElementsInSide; ++i){
            for(int j = 0; j < numElementsInSide; ++j){
                cin >> element[i][j];
            }
        }

        while(numRowRotations--){
            int rowNum;
            cin >> rowNum;
            --rowNum;
            
            for(int i = 0; i <= numElementsInSide/2; ++i){
                swap(element[rowNum][i], element[rowNum][numElementsInSide-i-1]);
            }

        }

        while(numColRotations--){
            int colNum;
            cin >> colNum;
            --colNum;
            
            for(int i = 0; i <= numElementsInSide/2; ++i){
                swap(element[i][colNum], element[numElementsInSide-i-1][colNum]);
            }
            
        }

        for(int i = 0; i < numElementsInSide; ++i){
            for(int j = 0; j < numElementsInSide; ++j){
                cout << element[i][j] << " ";
            }
            cout << endl;
        }
        
    }
}