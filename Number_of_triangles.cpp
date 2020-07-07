// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/number-of-triangles-6ac88eb2/
// 07-07-2020 Very-easy/easy
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
        int numSides;
        cin >> numSides;
        int black1, black2;
        cin >> black1 >> black2;
        --black1, --black2;
        ll ans = 0;
        
        auto bad = [&](int i){
            return i == black1 || i == black2;
        };

        for(int i = 0; i < numSides; ++i){
            if(!bad(i) && !bad((i+1) % numSides)){
                ans += numSides - 4;
            }
            if(!bad(i) && !bad((i+1)%numSides) && !bad((i+2)%numSides)){
                --ans;
            }
        }

        cout << ans << endl;
    }
}