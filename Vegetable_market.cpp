// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/vegetable-market-ea2b4462/
// 28-05-2020 Medium

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;



int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);
    
    int numStores;
    cin >> numStores;
    
    ll typesAtStore[numStores+1]={0};
    ll leftArr[ll(1e6+5)] = {0}, rightArr[ll(1e6+5)] = {0};
    vector<ll> quantity(ll(1e6+5), 0);

    for(int i = 1; i <= numStores; ++i){
        cin >> typesAtStore[i];
        ++leftArr[typesAtStore[i]], ++rightArr[typesAtStore[i]];
    }

    for(ll i = 1; i <= 1e6+5; ++i){
        leftArr[i] = leftArr[i-1] + (i*leftArr[i]);
    }
    
    for(ll i = 1e6+3; i > -1; --i){
        rightArr[i] += rightArr[i+1];
    }

    for(ll i = 1; i <= 1e6+5; ++i){
        quantity[i] = leftArr[i-1]+(rightArr[i]*i);
    }

    int numQueries;
    cin >> numQueries;
    
    while(numQueries--){
        ll reqTypes;
        cin >> reqTypes;
        vector<ll>::iterator it = lower_bound(quantity.begin(), quantity.end(), reqTypes);
        if(it != quantity.end()){
            cout << it-quantity.begin() << endl;
        }else{
            cout << "-1\n";
        }
    }
    
    return 0;

}