// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximum-goodness/
// 15-07-2020
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;


int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
	cin>>n;
	int arr[n+1]={0}, sum_sofar=INT_MIN , sum_endhere=0, start=1, end=1,s=1;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
		arr[i]=-1;
	}	
 
	for(int i=1;i<=n;i++)
	{
		sum_endhere+= arr[i];
		if(sum_sofar <= sum_endhere)
		{
			sum_sofar=sum_endhere;
			start=s;
			end=i;
		}
		if(sum_endhere< 0)
		{
			sum_endhere=0;
			s=i+1;
		}
	}
	cout<<end-start+1;

    return 0;
}
