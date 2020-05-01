// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/2-fast-2-furious/
// 07-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
    ll numCheckpoints;
    cin >>  numCheckpoints;
    ll brian[numCheckpoints], dom[numCheckpoints], maxDiffD = 0, maxDiffB = 0;
    cin >> dom[0];
    for(int i = 1; i < numCheckpoints; i++){
        cin >> dom[i];
        maxDiffD = max(maxDiffD, abs(dom[i] - dom[i-1]));
    }
    cin >> brian[0];
    for(int i = 1; i < numCheckpoints; i++){
        cin >> brian[i];
        maxDiffB = max(maxDiffB, abs(brian[i] - brian[i-1]));
    }
    if(maxDiffB == maxDiffD)
        cout << "Tie" << endl <<  maxDiffD;
    else if(maxDiffB > maxDiffD)
        cout << "Brian" << endl << maxDiffB;
    else
        cout << "Dom" << endl << maxDiffD;
}