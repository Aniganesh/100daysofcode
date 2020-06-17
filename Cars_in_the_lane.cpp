// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/and-this-one-784d9012/
// 17-06-2020 Very-easy/easy
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int countSetBits(ll& num){
    // cout << num << " : ";

    if(num < 1e9){
        return __builtin_popcount(num);
    }

    bitset<64> bits(num);
    int numSetBits = 0;
    
    for(int i = 0; i < 64; ++i){
        numSetBits += bits[i];
    }
    
    return numSetBits;
}

void fun(int n, long long a[])
{
    for(int i  = 1; i <= n; ++i){
        cout << pow(2, countSetBits(a[i])) << endl;
    }
}

int main()
{
	int t;
	cin>>t;
	long long a[t+1];
	for(int i=1;i<=t;i++)
        cin>>a[i];
    fun(t,a);
    return 0;
}