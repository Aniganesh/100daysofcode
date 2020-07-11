// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/modify-sequence/
// 11-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numNumbs;
    cin >> numNumbs;
    int a, b;
    cin >> a;

    while(--numNumbs){
        cin >> b;
        if((a = b-a) < 0){
            break;
        }
    }

    cout << (a?"NO": "YES");

    return 0;
}