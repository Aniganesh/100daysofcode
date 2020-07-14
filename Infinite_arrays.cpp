// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/infinity-array-715a233b/
// 14-07-2020 Very-easy/easy
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

long long func(long long *sum,long long X,long long N)
{
    return (sum[X%N]+(((X/N)%100000007)*sum[N])%100000007)%100000007;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numValues;
        cin >> numValues;
        ll arr[numValues+1];
        
        for(int i = 1; i <= numValues; ++i){
            cin >> arr[i];
        }

        int numQueries;
        cin >> numQueries;
        long long L[numQueries],R[numQueries];

        for(int i=0;i<numQueries;i++)
            cin>>L[i];
        
        for(int i=0;i<numQueries;i++)
            cin>>R[i];
        
        long long sum[numValues+1];
        sum[0]=0;

        for(int i=1;i <= numValues;i++)
            sum[i]=(sum[i-1]+arr[i])%100000007;
        
        for(int i=0;i < numQueries;i++)
            cout<<(func(sum,R[i],numValues)-func(sum,L[i]-1,numValues)+100000007)%100000007<<" ";
        
        cout<<endl;
    }
}