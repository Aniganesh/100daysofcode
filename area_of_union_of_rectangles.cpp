// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/area-of-union-of-rectangles/
// 05-04-2020 Very-easy/easy


#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int numRectangles;
    cin >> numRectangles;
    int twoDPlane[1000][1000] = {0};
    ll x1, y1, x2, y2, totArea = 0;
    for(int i = 0; i < numRectangles; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++)
            for(int j = y1; j < y2; j++)
                twoDPlane[i][j] = 1;
    }
    
    for(int i = 0;i < 1000; i++)
        for(int j = 0; j < 1000; j++)
            totArea += twoDPlane[i][j];
    cout << totArea;
}