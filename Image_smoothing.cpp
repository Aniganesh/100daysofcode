// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/image-smoothing-3/
// 09-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;
int grid[111][111], newImage[111][111];
int gridSize, filterSize;
bool valid(int i,int j) {
    if(i>=1 and i<=gridSize and j>=1 and j<=gridSize)
        return true;
    return false;
}

int main(){
    cin >> gridSize >> filterSize;
    map<pair<int,int>, int> filter;
    int x;
    for(int i = -filterSize; i <= filterSize; i++)
        for(int j = -filterSize; j <= filterSize; j++){
            cin >> x;  
            filter[{i,j}] = x;
        }
    
    
    
    for(int i = 1; i <= gridSize; i++){
        for(int j = 1; j <= gridSize; j++){
            cin >> grid[i][j];
        }
    }
    

    for(int i=1;i<=gridSize;i++) {
        for(int j=1;j<=gridSize;j++) {
            for(int p=-filterSize;p<=filterSize;p++) {
                for(int q=-filterSize;q<=filterSize;q++) {
                    if(valid(i+p,j+q))
                        newImage[i][j]+= grid[i+p][j+q] * filter[{p,q}];
                }
            }
        }
    }
    

    for(int i = 1; i <= gridSize; i++){
        for(int j = 1; j <= gridSize; j++){
            cout << newImage[i][j] << " ";
        }
        cout << endl;
    }
}