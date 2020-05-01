// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-thirsty-crow/
// 19-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int length, breadth, height, waterLevel;
        cin >> length >> breadth >> height >> waterLevel;
        int reqDisplacement = height - waterLevel;
        int numStones;
        cin >> numStones;
        int stoneWeight[numStones];
        for(int i = 0; i < numStones; i++)
            cin >> stoneWeight[i];
        sort(stoneWeight, stoneWeight+numStones, greater<int>());
        int SUM = 0;
        bool success = false;
        if(reqDisplacement <= 0){
            cout << 0 << endl;
            continue;
        }
        for(int i = 0; i < numStones; i++){
            SUM += stoneWeight[i];
            if(SUM > reqDisplacement){
                success = true;
                cout << i+1 << endl;
                break;
            }
        }
        if(!success)
            cout << numStones << endl;
    }   
}