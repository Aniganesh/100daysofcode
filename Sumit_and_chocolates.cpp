// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sumit-and-chocolates/
// 26-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numBoxes;
    cin >> numBoxes;
    int sumChocolates[numBoxes + 1];
    sumChocolates[0] = 0;
    for(int i = 1; i <= numBoxes; i++){
        cin >> sumChocolates[i];
        sumChocolates[i] += sumChocolates[i-1];
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int chocNumber;
        cin >> chocNumber;
        int boxNum = lower_bound(sumChocolates+1, sumChocolates+numBoxes+1, chocNumber) - sumChocolates;
        cout << boxNum << endl;
    }
}