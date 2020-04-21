// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/
// 21-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTransactions;
    cin >> numTransactions;
    vector<int> sumTransactionValue(numTransactions+1);
    sumTransactionValue[0] = 0;
    int value;
    for(int i = 1; i <= numTransactions; i++){
        cin >> value;
        sumTransactionValue[i] = sumTransactionValue[i-1] + value;
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int minValue;
        cin >> minValue;
        auto it = lower_bound(sumTransactionValue.begin(), sumTransactionValue.end(), minValue);
        if(it == sumTransactionValue.end())
            cout << "-1" << endl;
        else
            cout << it-sumTransactionValue.begin() << endl;
    }
}