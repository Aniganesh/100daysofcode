// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/timely-orders/
// 02-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;
vector<ll> vec;
ll sum[(ll)1e6+9];

int main(){
    ll i, j, n, ind, q, q1, a, b, c, k, ans, t;
    cin >> q;
    vec.push_back(0);
    sum[0] = 0;
    j = 0;
    while(q--){
        cin >> q1;
        if(q1 == 1){
            cin >> b >> c;
            vec.push_back(c);
            j++;
            sum[j] = sum[j-1] + b;
        }else{
            cin >> k >> t;
            ind = lower_bound(vec.begin(), vec.end(), t-k)-vec.begin();
            if(ind == 0){
                ind = 1;
            }
            cout << sum[j] - sum[ind-1] << endl;
        }
    }
    return 0;
}