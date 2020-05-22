// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/shil-and-square-sum-qualifier2/
// 22-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int numValues, limit;
    cin >> numValues >> limit;
    ll values[numValues+1] = {0};
    
    for(int i = 1; i <= numValues; ++i){
        cin >> values[i];
    }

    ll sum1 = 0, sum2 = 0, sum3 = 0;

    for(ll i = 1; i <= limit; ++i){
        sum1 += (i*i*values[i]) MOD;
        sum2 += (i*values[i]) MOD;
        sum3 += values[i];
        sum1 = sum1 MOD;
        sum2 = sum2 MOD;
        sum3 = sum3 MOD;
    }
    cout << sum1 << " ";

    for(ll i = limit+1; i <= numValues; ++i){
        sum1 += sum3;
        sum1 -= 2*sum2;
        sum1 += (limit*limit*values[i]) MOD;

        sum2 -= sum3;
        sum2 += (limit * values[i]) MOD;

        sum3 -= values[i-limit];
        sum3 += values[i];

        sum1 = sum1 MOD;

        if(sum1 < 0)
            sum1 += 1e9 + 7;
        
        sum2 = sum2 MOD;

        if(sum2 < 0)
            sum2 += 1e9 + 7;

        sum3 = sum3 MOD;

        if(sum3 < 0)
            sum3 += 1e9 + 7;
        cout << sum1 << " ";
    }
}