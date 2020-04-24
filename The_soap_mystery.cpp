// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-soap-mystery/
// 24-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numSoaps;
    cin >> numSoaps;
    vector<ll> soapPrice(numSoaps);
    for(int i = 0; i < numSoaps; i++)
        cin >> soapPrice[i];
    sort(soapPrice.begin(), soapPrice.end());
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int queryPrice;
        cin >> queryPrice;
        vector<ll>::iterator bound = upper_bound(soapPrice.begin(), soapPrice.end(), queryPrice);
        while(*(bound-1) == queryPrice)
            bound--;
        cout << bound - soapPrice.begin() << endl;
    }
}