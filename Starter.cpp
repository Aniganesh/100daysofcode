// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/easy-multiples/
// 02-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll n, SUM, numPairs, numMultiples;
        cin >> n;

        numMultiples = ((n - 1) / 3);
        numPairs = numMultiples / 2;
        SUM = numPairs * (3 + (3 * numMultiples));
        if(numMultiples % 2 != 0)
            SUM += (3 + (3 * numMultiples))/2;
        
        numMultiples = (n - 1) / 5;
        numPairs = numMultiples / 2;
        SUM += numPairs * (5 + (5 * numMultiples));
        if(numMultiples % 2 != 0)
            SUM += (5 + (5 * numMultiples)) / 2;
        
        numMultiples = (n - 1) / 15;
        numPairs = numMultiples / 2;
        SUM -= numPairs * (15 + (15 * numMultiples));
        if(numMultiples % 2 != 0)
            SUM -= (15 + (15 * numMultiples))/2;
        cout << SUM << endl;
    }
}
