// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/easy-one-8/
// 06-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numVals, numQueries, valToFind, RES = 0;
        cin >> numVals >> numQueries;
        map<int, int> numFrequency;

        while(numVals--){
            int val;
            cin >> val;
            ++numFrequency[val];
        }
        while(numQueries--){
            cin >> valToFind;
            cout << numFrequency[valToFind] << endl;
        }
    }
}