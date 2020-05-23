// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cycle-count-0644f309/
// 23-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        ll numSides;
        cin >> numSides;
        cout << (numSides*(numSides-1) + 1) << endl;
    }
}