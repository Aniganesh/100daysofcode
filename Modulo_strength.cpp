// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/modulo-strength-4/
// 10-07-2020 Very-easy/easy
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k,s=0,i,h[2000001]={0};
	cin>>n>>k;
	long long int a[n];
	for( i=0;i<n;i++){
	    cin>>a[i];
        h[a[i]%k]++;
    }
	for( i=0;i<2000001;i++ ){
		s+=h[i]*(h[i]-1);
    }
    cout<<s;
}