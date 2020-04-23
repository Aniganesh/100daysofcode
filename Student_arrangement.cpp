// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/student-arrangement-6/
// 23-04-2020 Very-easy/easy
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n,m,k,i;
    cin>>n>>m>>k;
    int arr[n+1],cnt[m+1];
    memset(cnt,0,sizeof cnt);
    set <int> s;
    for(i=1;i<=n;i++)
    {
    	cin>>arr[i];
    }
    for(i=1;i<=m;i++)
    {
    	s.insert(i);
    }
    int ans=0;
    for(i=1;i<=n;i++)
    {
    	if(s.find(arr[i])==s.end())
    	{
    		ans++;
    		if(!s.empty())
		{
			pair <set<int>:: iterator,bool> it=s.insert(arr[i]);
    			it.first++;
    			if(it.first==s.end())
    			{	
    				int idx=*(s.begin());
    				cnt[idx]++;
    				if(cnt[idx]>=k)
    				{
    					s.erase(idx);
    				}
    			}
    			else
    			{
    				int idx=*(it.first);
    				cnt[idx]++;
    				if(cnt[idx]>=k)
    				{
    					s.erase(idx);
    				}
    			}
    			s.erase(arr[i]);
    		}	
    	}
    	else
    	{
    		cnt[arr[i]]++;
    		if(cnt[arr[i]]>=k)
    		{
    			s.erase(arr[i]);
    		}
    	}
    }
    cout<<ans<<endl;
    return 0;
}