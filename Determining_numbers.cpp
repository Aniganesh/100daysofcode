// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/find-the-numbers-75f24949/
// 09-05-2020 Very-easy/easy
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int maxn = 1e6 + 14;
int n;
bool mark[maxn];
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mark[x] ^= 1;
	}
	for(int i = 1; i < maxn; i++)
		if(mark[i])
			cout << i << ' ';
	cout << '\n';
}