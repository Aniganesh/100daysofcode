// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/debts-429c5441/
// 22-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numPeople, numDebts;
    cin >> numPeople >> numDebts;
    int reqPayment[numPeople+1] = {0};
    
    while(numDebts--){ 
        int owedBy, owedTo, amt;
        cin >> owedBy >> owedTo >> amt;

        reqPayment[owedBy] -= amt; reqPayment[owedTo] += amt;
        
    }

    ll RES = 0;

    for(int i = 0; i < numPeople+1; ++i){
        RES += reqPayment[i] > 0 ? reqPayment[i]: 0;
    }
    
    cout << RES;
}