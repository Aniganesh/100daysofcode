// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/communicating-coronaviruses-1/
// 05-06-2020 Very-easy/easy
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
        ll numCV, numTimestamps, RES = 0, sum=0, prev = 1;
        cin >> numCV >> numTimestamps;
        pair<ll,ll> index[2*numTimestamps];

        for(int i = 0; i < numTimestamps; ++i){
            ll left, right, power;
            cin >> left >> right >> power;
            index[2*i] = {left, power};
            index[2*i+1] = {right+1, -power};
        }
        
        sort(index, index+2*numTimestamps);
        
        for(int i = 0; i < 2*numTimestamps; ++i){
            ll curr = index[i].first;
            if((curr-prev)%2)
                RES^= sum;
            sum+= index[i].second;
            prev = curr;
        }

        cout << RES << endl;
    }
    return 0;
}