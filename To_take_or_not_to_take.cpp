// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/totakeornottotake/
// 08-06-2020 - Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

ll newPower(ll a, char type, ll x){
    if(type == 'N')
        return -a;
    
    if(type == '+') return a+x;
    
    if(type == '-') return a-x;

    if(type == '*') return a*x;

    if(type == '/') return a/x;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        ll numBaloons;
        cin >> numBaloons;
        ll minPossible = 1, maxPossible = 1;

        while(numBaloons--){
            char op;
            ll power;
            cin >> op;
            
            if(op != 'N'){
                cin >> power;
            }
            vector<ll> maybe;
            maybe.push_back(minPossible);
            maybe.push_back(maxPossible);
            maybe.push_back(newPower(minPossible, op, power));
            maybe.push_back(newPower(maxPossible, op, power));
            sort(maybe.begin(), maybe.end());
            minPossible = maybe[0];
            maxPossible = maybe.back();
        }

        cout << maxPossible << endl;
    }
}