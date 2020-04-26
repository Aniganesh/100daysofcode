// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/
// 26-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll A, B, C, K;
        cin >> A >> B >> C >> K;
        ll low = 0, high = 1e5;
        while(low <= high){
            ll mid = (low + high) / 2;
            ll midRes = A * mid * mid + B * mid + C;
            if(midRes < K){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        cout << low << endl;
    }
}