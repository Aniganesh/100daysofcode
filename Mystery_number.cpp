// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-number/
// 12-07-2020 Very-easy/easy
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
        int n;
        cin >> n;
        vector<int> bits;
        
        while(n){
            bits.push_back(n%2);
            n /= 2;
        }
        
        int temp = 0;
        vector<int> res;
        
        for(int i = bits.size()-1; i >= 0; --i){
            res.push_back(bits[i]^temp);
            temp = temp ^ res.back();
        }

        ll ans = 0;

        for(int i = 0; i < res.size(); ++i){
            if(res[i]){
                ans += (ll) pow(2,res.size()-i-1);
            }
        }

        cout << ans < endl;
    }
}