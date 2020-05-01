// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/flipping-the-string-831bbbbe/
// 27-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

const int MAX = 1e6+5;
int setBits[MAX];
int a[MAX];
int sum[MAX];

int countSetBits(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

void setSetbits(){
    for(int i = 0; i < MAX; i++)
        setBits[i] = countSetBits(i);
}

void calcSumOfSetBits(int n){
    sum[0] = a[0];
    for(int i = 1; i <= n; i++){
        sum[i] = sum[i-1] + setBits[a[i]];
    }
}

bool check(int n, int x, int k){
    for(int i = 0; i <= n-x; i++){
        if((sum[i+x] - sum[i]) >= k)
            return true;
    }
    return false;
}

int main(){
    setSetbits();
    int n, q, k;
    scanf("%d %d", &n, &q);
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    calcSumOfSetBits(n);
    // q is numQueries
    while(q--){
        scanf("%d", &k);
        int low = 1, mid, high = n, RES = -1;
        while(high-low>=0){
            mid = (low+high) / 2;
            if(check(n, mid, k)){
                RES = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        printf("%d\n", RES);
    }
    return 0;
}