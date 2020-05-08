// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/achhe-din-6baeb5d1/
// 08-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int numInts;
        cin >> numInts;
        int value;
        map<int, int> numFrequency;
        for(int i = 0; i < numInts; i++){
            cin >> value;
            numFrequency[value]++;
        }
        int RES;
        for(auto i = numFrequency.begin(); i != numFrequency.end(); ++i){
            if(i->second == 1){
                RES = i->first;
                break;
            }
        }
        cout << RES << endl;
    }
}