// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/c-absolute-prime/
// 31-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);

    vector<long> absolutePrime(1e6+5, 1);
    absolutePrime[0] = absolutePrime[1] = -1;
    for(long i = 2; i < 1e6+5; ++i){
        if(absolutePrime[i]){
            for(long j = i*i; j < 1e6+5; j += i){
                absolutePrime[j] = 0;
            }
        }
    }

    for(long i = 1e6+4; i > 1; --i){
        long temp = i, sum = 0;
        
        while(temp){
            sum += (temp % 10);
            temp /= 10;
        }

        if(absolutePrime[i] && absolutePrime[sum] != 1){
            absolutePrime[i] = 0;
        }
    }

    for(long i = 1; i < 1e6+5; ++i){
        if(absolutePrime[i] == 1)
            absolutePrime[i] = i;
        else
            absolutePrime[i] = absolutePrime[i-1];
    }

    long numTestcases;
    cin >> numTestcases;

    while(numTestcases--){
        long num;
        cin >> num;
        cout << absolutePrime[num-1] << endl;
    }
    return 0;
}