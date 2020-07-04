// https://www.hackerearth.com/problem/algorithm/power-battle/
// 04-07-2020 Very-easy/easy
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
        ll a, x, b, y;
        cin >> a >> x >> b >> y;
        ll sanshul = x*log(a), samkit = y*log(b);
        // approximation instead of actual calculation since actual calculation would result in overflow
        
        if(sanshul > samkit){
            cout << "Samkit\n";
        }else if(sanshul == samkit){
            cout << "Draw\n";
        }else {
            cout << "Sanshul\n";
        }
    }
    return 0;
}