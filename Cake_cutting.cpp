// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cake-2/
// 24-05-2020 Very-easy/easy


#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	cin >> n;
	int arr1[n]={0}, arr2[n]={0}, hr1 = 0, hr2 = 0;
	for(int row = 1; row <= n; row++)
	{
		string s;
		cin >> s;
		for(int i=0; i<s.size(); i++) {
			if(row <= n/2) {
				if(s[i] == '1') {
					arr1[i]++;
					hr1++;
				}	
			}
			else {
				if(s[i] == '1') {
					arr2[i]++;
					hr2++;
				}
			}
		}	
	}
	int ans = abs(hr1 - hr2);
	for(int i = 0; i < n; i++) {
		int x = hr1 - arr1[i] + arr2[i];
		int y = hr2 - arr2[i] + arr1[i];
		ans = min(ans, abs(x-y));
	}
	printf("%d\n", ans);
	return 0;
}

