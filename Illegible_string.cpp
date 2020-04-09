// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/illegible-string/
// 09-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int strLength;
    cin >> strLength;
    string written;
    cin >> written;
    int vCount = 0, wCount = 0, minLength = 0, maxLength = 0;
    for(int i = 0; i < written.length(); i++){
        if(written[i] == 'v')vCount++;
        else if(written[i] == 'w')wCount++;
        else{
            ++maxLength;
            ++minLength;
            // Increment min and max length to account for non vw character.
            int numVs = 2 * wCount + vCount;
            maxLength += numVs;
            minLength += ceil(numVs / 2.0); // Add number of 'w's possible from minLength;
            vCount = 0;
            wCount = 0;
        }
    }
    // do similar operation with maxLength and minLength as in for loop in case the last few chars are v's or w's. If they aren't, vCount and wCount will be 0 anyway.
    int numVs = 2 * wCount + vCount;
    maxLength += numVs;
    minLength += ceil(numVs / 2.0);
    cout << minLength << " ";
    cout << maxLength;
}