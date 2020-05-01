// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/dummy-28/
// 03-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int numStones;
    cin >> numStones;
    int stonePowers[numStones];
    for(int i = 0; i < numStones; i++){
        cin >> stonePowers[i];
        if(stonePowers[i] > (numStones - (i + 1))){
            cout << i+1; break;
        }
    }
}