// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/how-many-buildings-you-can-make-1/
// 16-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numSquares;
        cin >> numSquares;
        int numRectangles = 0;
        for(int height = 1; height <= sqrt(numSquares); ++height){
            for(int width = height; width * height <= numSquares; ++width){
                ++numRectangles;
            }
        }
        cout << numRectangles << endl;
    }
}