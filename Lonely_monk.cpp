// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/lonely-monk-code-monk/
// 04-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    int sumValues[numValues+1] = {0}, value, numEvenSums = 0;
    int oddAndEvenSumsCount[2] = {1,0};
    for(int i = 1; i < numValues + 1; i++){
        cin >> value;
        sumValues[i] = sumValues[i-1]+value;
        sumValues[i] %= 2;
        numEvenSums += oddAndEvenSumsCount[sumValues[i]];
        ++oddAndEvenSumsCount[sumValues[i]];
    }
    
    cout << numEvenSums;
}