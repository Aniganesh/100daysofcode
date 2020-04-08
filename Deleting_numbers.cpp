// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/deleting-numbers-efb41d85/
// 08-04-2020 Very-easy/easy

#include <bits/stdc++.h>
using namespace std;
int n , k;
int a[100005];
int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
   	int l = (n + 1) / 2 , r = (n + 1) / 2;
   	bool odd = n % 2;
   	for(int i = 1; i <= k; i++)
   	{
    	int par = (i % 2) ^ odd;
    	if(par)
    		r++;
    	else
			l--;
	}
	int maxNumber = 0;
	for(int i = l; i <= r; i++)
    	maxNumber = max(maxNumber , a[i]);
    cout << maxNumber;
}

