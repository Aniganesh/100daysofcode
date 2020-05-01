// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/hawkeye-and-floodfill/
// 28-03-2020 Very-easy/easy

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int matrixSize, x, y, power;
    cin >> matrixSize;
    cin >> x >> y >> power;
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            cout << max(0, power - max(abs(x - i), abs(y - j)) ) << " ";
        }        
        cout << endl;
    }
}