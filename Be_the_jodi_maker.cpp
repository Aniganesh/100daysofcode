// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-couples/
// 24-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int numPairs, numPairCopy;
        cin >> numPairs;
        numPairCopy = numPairs;
        map<string, string> allPairs;
        string start, end;
        string first, second;
        cin >> first >> second;
        start = first, end = second;
        --numPairCopy;

        allPairs[first] = second;
        int numSuccessful = 0;
        bool noCircle = false;

        while(numPairCopy--){
            cin >> first >> second;
            allPairs[first] = second;
            if(allPairs[second] == first){
                ++numSuccessful;
                noCircle = true;
            }
        }
        
        if(noCircle){
            cout << "NO\n";
            cout << numSuccessful << endl << endl;
        }else{
            end = allPairs[start];
            for(int i = 1; i < numPairs; i++){
                end = allPairs[end];
            }
            if(end == start){
                cout << "YES\n\n";
            }else{
                cout << "NO\n" << numSuccessful << endl << endl;
            }
        }
    }
}