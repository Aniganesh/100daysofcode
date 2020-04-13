// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/prateek-and-his-friends/
// 13-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        ll  N,X,START = 0,SUM;
        bool FLAG = false;
        cin>>N>>X;
        ll Cost[N];
        for(int i=0;i<N;i++)
        {
            cin>>Cost[i];
        }
        SUM = Cost[0];
        for(int i=1;i<N;i++)
        {
            /*if SUM exceeds the given X ,start excluding elements from begining of range
              until you left with SUM which is less than or equal to X,
              or single value in the range of friends .
            */
             while(SUM > X)
            {
                SUM -= Cost[START];
                START++;
            }
            if(SUM == X )
            {
                FLAG = true;
                break;
            }
            SUM += Cost[i];
        }
        //if last element of array comes in range of friends
        while(SUM > X)
        {
            SUM -= Cost[START];
            START++;
        }
        if(SUM == X)
        {
            FLAG = true;
        }
        if(FLAG)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
}