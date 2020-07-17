// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/perfect-subarray-43560f46/
// 17-07-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

bool isSquare(ll num){
    ll root = sqrt(num);
    
    if(root*root == num || (root+1)*(root+1) == num /* checking rounded up value since casting to integer type causes loss of decimal */){
        return true;
    }

    return false;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numValues;
    cin >> numValues;
    ll sums[numValues+1] = {0};
    
    for(int i = 1; i <= numValues; ++i){
        cin >> sums[i];
        sums[i]+= sums[i-1];
    }

    ll RES = 0;

    for(int i = 1; i <= numValues; ++i){
        for(int j = i; j <= numValues; ++j){
            if(isSquare(sums[j] - sums[i-1])){
                ++RES;
            }
        }
    }

    cout << RES;
}