// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pairs-16/
// 14-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    ll a[100005]={0},i,j,l,r;
	for(i=2;i<100005;i++)
	{
		for(j=2;i*j<100005;j++)
		{
			a[i*j]=1;
		}
	}
	for(i=2;i<100005;i++)
	{
		a[i]+=a[i-1];
	}
	ll T,temp;
	cin>>T;
	for(int t=1;t<=T;t++)
	{
		cin >> l >> r ;
		temp = a[r]-a[l-1];
		if(l==1 || r==1)
		{
			cout << temp*(r-l+1-temp-1) << endl;
		}
		else
		cout << temp*(r-l+1-temp) << endl;
	}

}