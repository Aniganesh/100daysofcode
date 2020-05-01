// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sherlock-and-numbers/
// 23-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int removed[(int)1e5+1];

int get(int n, int k){
    int i = 0;
    while(i < k and removed[i] <= n)i++;
    return n-i;
}

int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        int uptoN, numRemoved, pthSmallest;
        scanf("%d %d %d", &uptoN, &numRemoved, &pthSmallest);
        
        for(int i = 0; i < numRemoved; i++)
            scanf("%d", &removed[i]);
        sort(removed, removed+numRemoved);
        int low = 0, high = uptoN, mid;
        if(get(high, numRemoved) < pthSmallest){
            printf("-1\n");
            continue;
        }
        while(high - low > 1){
            mid = (high + low) / 2;
            // binary search
            int q =  get(mid, numRemoved);
            if(q < pthSmallest) low = mid;
            else high = mid;
        }
        printf("%d\n", low+1);
    }
}