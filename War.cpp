// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/warcakewalk/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numUnits;
        cin >> numUnits;
        long long num, maxBob = 0, maxAlice = 0;
        for(int i = 0; i < numUnits; i++){
            cin >> num;
            maxBob = max(num, maxBob);
        }
        for(int i = 0; i < numUnits; i++){
            cin >> num;
            maxAlice = max(num, maxAlice);
        }
        if(maxAlice == maxBob)
            cout << "Tie" << endl;
        else if(maxAlice < maxBob)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
}