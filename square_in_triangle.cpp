// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/square-in-triangle/
// 03-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long squareSide, triangleBase;
        cin >> squareSide >> triangleBase;
        triangleBase -= squareSide;
        triangleBase /= squareSide;
        cout << (triangleBase * (triangleBase+1))/2 << endl;
        // triangleBase * (triangleBase+1)/2 is the same as (triangleBase * (triangleBase+1))/2
    }
}
// help: https://www.geeksforgeeks.org/maximum-number-2x2-squares-can-fit-inside-right-isosceles-triangle/