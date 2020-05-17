// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/perfect-pair-df920e90/
// 17-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;


int main(){
    int numTestcases;
    cin >> numTestcases;
    bool isSquareOrCube[2001] = {false};
    for(ll i = 1; i < sqrt(2001); ++i){
        if(i*i <= 2001)
            isSquareOrCube[i*i] = true;
        if(i*i*i <= 2001)
            isSquareOrCube[i*i*i] = true;
    }
    while(numTestcases--){
        int numValues;
        cin >> numValues;
        ll value;
        vector<ll> values;
        unordered_map<ll, ll> valueFreq;
        for(ll i = 0; i < numValues; ++i){
            cin >> value;
            valueFreq[value]++;
        }
        
        for(pair<ll, ll> i: valueFreq)
            values.push_back(i.first);
        
        ll RES = 0;
        int numUniqueValues = values.size();
        for(ll i = 0; i < numUniqueValues; ++i){
            ll freq = valueFreq[values[i]];
            if(freq>1 && isSquareOrCube[2*values[i]])
                RES += (freq * (freq-1)) / 2;
            for(ll j = i+1; j < numUniqueValues; ++j){
                if(isSquareOrCube[values[i]+values[j]])
                    RES += (freq*valueFreq[values[j]]);
            }
        }
        cout << RES << endl;
    }
}