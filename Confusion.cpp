// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/confusion-1/editorial/
// 10-05-2020 Very-easy/easy
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
void distinct(int a[],int n, int q,int query[])
{
   int check[MAX]={0};
    int idx[MAX];
    int cnt=1;
    for(int i=n-1;i>=0;i--)
    {
       
      if(check[a[i]]==0)
      {
          idx[i]=cnt;
          check[a[i]]=1;
          cnt++;
      }
      else
      {
          idx[i]=cnt-1;
      }
    }
    for (int i=0;i<q;i++)
    {
        int m=query[i];
        cout<<idx[m-1]<<endl;
 
    }
}
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    int query[q];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
 
    }
    for (int i=0;i<q;i++)
    {
        cin>>query[i];
    }
 distinct(a,n,q,query);
 return 0;   
}