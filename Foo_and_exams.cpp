// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/foo-and-exams-4/
// 27-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;
ll a, b, c, d, k;
// No better names for mathematical variables.

ll stressCalculate(ll v){
    double T = v;
    double temp = a*T*T*T +  b*T*T + c*T + d;
    if(temp + 1e-9 > 1e18)
        return k+1;
    return a*v*v*v +  b*v*v + c*v + d;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        cin >> a >> b >> c >> d >> k;
        ll maxTime = 1e6, minTime = 0, mid;
        bool found = false;
        ll RES = 0;
        while(minTime <= maxTime){
            mid = (minTime + maxTime) >> 1;
            // Division by 2
            
            if(stressCalculate(mid) <= k){
                RES = mid;
                minTime = mid + 1;
            }else{
                maxTime = mid - 1;
            }
        }
        
        cout << RES << endl;
    }
}