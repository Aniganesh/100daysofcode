// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/akash-and-diagnol-moves-dfc4f00f/
// 08-07-2020 Very-easy/easy
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
        int x, y;
        cin >> x >> y;

        if(y > x ||(x < 0) || (y < 0)){
            cout << "-1\n";
            continue;
        }

        cout << x << endl;
    }
}