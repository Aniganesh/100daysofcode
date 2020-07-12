// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/set-and-unset-bits/
// 12-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
     
    vector<int> RES = {1};
    for(int i = 2; RES.size() < 627509; ++i){
        int setBits = __builtin_popcount(i);
        int unsetBits = (int)(log2(i)+1) - setBits;
        if(unsetBits == 0)
            continue;
        if(__gcd(setBits, unsetBits) == 1){
            RES.push_back(i);
        }
    }

    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int index;
        cin >> index;
        cout << RES [index-1] << endl;
    }
}