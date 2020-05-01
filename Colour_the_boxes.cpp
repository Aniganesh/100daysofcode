// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/color-the-boxes-47270a3b/#c219948
// 31-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long numBoxes, numColours;
    cin >> numBoxes >> numColours;
    numBoxes = 1;
    for(int i = 1; i <= numColours; i++)
        numBoxes  = (numBoxes * i)%1000000007;
    cout << numBoxes << endl;
}