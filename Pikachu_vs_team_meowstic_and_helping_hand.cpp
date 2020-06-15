// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/pikachu-loves-or-0c02a270/
// 15-06-2020
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numMeowstic;
    ll numrounds;
    cin >> numMeowstic >> numrounds;
    ll meowsticPowers[numMeowstic];
    for(int i = 0; i < numMeowstic; ++i){
        cin >> meowsticPowers[i];
    }
    
    vector<int> last_set(30, INT_MIN);
    vector<int> RES(numMeowstic);
    
    for(int i = 0; i < numMeowstic; ++i){
        for(int j = 0; j < 30; ++j){
            if((meowsticPowers[i]>>j)&1){
                last_set[j] = i;
            }if(i <= numrounds+last_set[j]){
                RES[i] |= (1<<j);
            }
        }
    }

    for(int i = 0; i < numMeowstic; ++i){
        cout << RES[i] << " ";
    }
    
    return 0;
}