// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/chess-tournament-4/
// 09-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a[2000][2000], r[10][2010];
    int p[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048}, i, j, n;
    cin >> n;

    for(i =1; i <= p[n]-1;++i){
        for(j = 1; j<= i; ++j){
            cin >> a[i+1][j];
        }
    }
    
    for(i = 1; i <= p[n]; ++i){
        r[0][i] = i;
    }

    for(i = 1; i <= n; ++i){
        for(j = 1; j <= p[n-1]; ++j){
            if(a[r[i-1][2*j]][r[i-1][2*j-1]] == 1){
                r[i][j] = r[i-1][2*j];
            }else{
                r[i][j] = r[i-1][2*j-1];
            }
        }
    }
    
    cout << r[n][1];
    return 0;
}