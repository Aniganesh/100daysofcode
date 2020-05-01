// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bags-of-coins-7b1d612c/
// 27-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie();
    ios_base::sync_with_stdio();
    
    ll n, largest = 0;
    cin >> n;
    ll values[n+1] = {0};
    for(ll i = 1; i < n+1; i++){
        cin >> values[i];
        largest = max(largest, values[i]);
    }

    sort(values, values+n+1);
    ll sums[n+1] = {0};
    for(ll i = 1; i < n+1; i++){
        sums[i] = sums[i-1] + values[i];
    }
    for(int i = 1; i < largest; i++){
        ll low = 1, high = n;
        ll limitLower = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(values[mid] < i){
                limitLower = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        ll limitHigher = 0;
        low = 1, high = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(values[mid] > i){
                high = mid - 1;
                limitHigher = mid;
            }else{
                low = mid + 1;
            }
        }
        ll val1 = sums[limitLower];
        ll val2 = sums[n] - sums[limitHigher-1];
        if(val1 == val2){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}