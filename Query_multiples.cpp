// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/query-multiples-6cf951be/
// 02-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MAX_VAL 20002
using namespace std;

const int MAX = 100002;
int n;
int q;
int a[MAX];
vector<int> di[MAX];
vector<int> V[MAX];
int main(){
	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < MAX_VAL; i++){
		for (int j = i; j < MAX_VAL; j += i){
			di[j].push_back(i);
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < di[a[i]].size(); j++){
			V[di[a[i]][j]].push_back(i);
		}
	}
	while (q--){
		int i, x;
		scanf("%d%d", &i, &x);
		i--;
		int ind = lower_bound(V[x].begin(), V[x].end(),i) - V[x].begin();
		ind = V[x].size() - ind;
		printf("%d\n", ind);
	}
	return 0;
}