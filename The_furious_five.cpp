// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-furious-five-69521576/
// 02-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

ll minm(ll a, ll b){
    return (a < b) ? a : b;
}

ll get(ll num){
    ll ret = 0;
    while(num!= 0){
        ret += num / 5;
        num /= 5;
    }
    return ret;
}

int main(){
    int numTestcases;
    scanf("%d", &numTestcases);
    while(numTestcases--){
        ll low = 0, mid, high = 1e18, n;
        scanf("%lld", &n);
        ll ans = high;
        while(low <= high){
            mid = (low + high) / 2;
            ll val = get(mid);
            if(val >= n){
                high = mid - 1;
                ans = min(ans, mid);
            }else{
                low = mid + 1;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}