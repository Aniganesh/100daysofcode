// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/chinu-and-his-project/
// 16-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    bitset<32> bits(num);
    string s = bits.to_string();
    int r = 0;
    vector<int> v;
    int p = 0;
    
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '0' && r == 0){
            continue;
        }
        r = 1;
        v.push_back(p^(s[i]-48));
        p = p^(s[i]-48);
    }

    int ans = 0, val = 1;

    for(int i = v.size()-1; i >- 1; --i){
        ans += val*v[i];
        val *= 2;
    }

    cout << ans << endl;
    return 0;
}