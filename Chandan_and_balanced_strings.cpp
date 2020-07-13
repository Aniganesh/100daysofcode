// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/chandan-and-balanced-strings/
// 13-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    scanf("%d",&numTestcases);
    char s[100010];
    vector<int> A;
    
    while(numTestcases--){
        scanf("%s", s+1);
        int n = strlen(s+1);
        int val = 0;
        A.push_back(val);
        for(int i = n; i >= 1; i--){
            int bit = s[i]-'a';
            val = val ^ (1<<bit);
            A.push_back(val);
        }

        sort(A.begin(), A.end());
        int i = 0; 
        ll ans = 0;
        
        while(i <= n){
            val = A[i];
            ll cnt = 0;
            while(i <= n && val == A[i]){
                ++cnt;
                ++i;
            }
            ans = ans + (cnt*(cnt-1))/2;
        }
        cout << ans << endl;
        A.clear();
    }
    
    return 0;
}