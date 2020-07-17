// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/b-39/
// 17-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numPeople;
    cin >> numPeople;
    vector<ll> defenders(numPeople), strikers(numPeople);
    
    for(int i = 0; i < numPeople; ++i){
        cin >> defenders[i];
    }

    for(int i = 0; i < numPeople; ++i){
        cin >> strikers[i];
    }

    sort(strikers.begin(), strikers.end());
    ll RES = 0;

    for(int i = 0; i < numPeople; ++i){
        
        for(int j = i+1; j < numPeople; ++j){
        
            if(defenders[j] > defenders[i]){
                RES += strikers.end() - lower_bound(strikers.begin(), strikers.end(), defenders[j]+1);
            }
        
        }

    }
    
    cout << RES;
}