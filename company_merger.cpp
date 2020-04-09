// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm//car-company-merger-125475cc/
// 09-04-2020 Very-easy/easy

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int N, M;
    cin>>N;
    cin>>M;
    ll marketId, numMergers = 0;
    vector<vector<ll>> companies;
    vector<ll> marketIds;
    for(int i = 0; i < N; i++){
        vector<ll> v;
        for(int j  = 0; j < M; j++){
            cin >> marketId;
            v.push_back(marketId);
        }
        auto it = find(companies.begin(), companies.end(), v);
        if(it == companies.end()){
            companies.push_back(v);
            for(auto j: v){
                marketIds.push_back(j);
            }
        }
        else
            numMergers++;
    }
    set<ll> uniqueMarketIds(marketIds.begin(), marketIds.end());
    vector<ll> countvec;
    for(auto i: uniqueMarketIds){
        countvec.push_back(count(marketIds.begin(), marketIds.end(), i));
    }
    ll maxCount = *max_element(countvec.begin(), countvec.end());
    if(maxCount > 2){
        numMergers += maxCount - max((ll)2, *min_element(countvec.begin(), countvec.end())) + 1;
    }
    if(numMergers > N-2 && numMergers > 0){
        numMergers = N-2;
    }
    if(companies.size() == 1 && N > 1)
        numMergers = N-2;
    cout << numMergers ;
	return 0;
}