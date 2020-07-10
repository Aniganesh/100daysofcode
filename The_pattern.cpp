// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-pattern-c9e759e9/
// 10-07-2020 Very-easy/easy
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
        int n, m;
        char c;
        cin >> n >> m;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> c;
            }
        }
        cout << c << endl;
    }
}