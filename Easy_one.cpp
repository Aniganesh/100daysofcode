// https://www.hackerearth.com/problem/algorithm/dummy3-2/
// 01-06-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    bool isPrime[int(1e6)];
    memset(isPrime, true, sizeof isPrime);

    for(int i = 2; i < sqrt(1e6); ++i){
        if(isPrime[i]){
            for(int j = i*i; j <= 1e6; j += i){
                isPrime[j] = false;
            }
        }
    }

    int num;
    cin >> num;
    int count = 0;
    
    for(int i = 2; i <= num; ++i){
       count += isPrime[i];
    }
    
    cout << count;
    return 0;
}