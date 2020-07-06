// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/magic-rectangles-646e0051/
// 06-07-2020 Hard
#include <bits/stdc++.h>
using namespace std;
#define PR(x) printf("%d\n",x)
#define  MAXSIZE 100001
#define y1 aasdfasdfasdf

int mat[300][300];
int s[205];
int M,N,P;

int solve()
{
	//write code here
 
	int ans = 0;
	for(int i = 0; i < M; ++i){
		for(int j = 0; j < N; ++j)s[j] = 0;
		for(int j = i; j < M; ++j){
			int t[205] = {1};
			for(int k = 0;k < N; ++k){
				s[k] += mat[j][k];
			}
			int sum = 0;
			for(int k = 0; k < N; ++k){
				sum = (sum+s[k])%P;
				ans += t[sum]++;
			}
		}
	}
	return ans;
}

int main()
{
	int i,j;

	scanf("%d %d %d",&M,&N,&P);

	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&mat[i][j]);
	PR(solve());

	return 0;
}