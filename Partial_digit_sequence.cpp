// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/partial-digit-sequence-34fa8391/
// 08-06-2020
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numVals;
    cin >> numVals;
    string str[numVals];

    for(int i = 0; i < numVals; ++i){
        cin >> str[i];
        ll x = 0;

        for(char c : str[i]){
            x = x*10 + (ll) (c - '0');
        }
    }

    int count[10] = {0};

    for(int i = 0; i < numVals; ++i){
        int sz = str[i].size();
        set<int> ss;

        for(int j = 0; j < sz; ++j){
            ss.insert(str[i][j]-'0');
        }

        int val = 0;
        for(int x: ss) val = max(val, count[x]);
        for(int x: ss) count[x] = val+1;
    }

    int ans = 0;

    for(int i = 0; i < 10; ++i)
        ans = max(ans, count[i]);

    cout << ans << endl;

    return 0;
}