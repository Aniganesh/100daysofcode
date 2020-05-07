// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/long-atm-queue-3/
// 07-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numPeople;
    cin >> numPeople;
    int prevPersonHeight, currPersonHeight, numGroups = 1;
    cin >> prevPersonHeight;
    for(int i = 1; i < numPeople; i++){
        cin >> currPersonHeight;
        if(currPersonHeight < prevPersonHeight)
            ++numGroups;
        prevPersonHeight = currPersonHeight;
    }
    cout << numGroups;
}