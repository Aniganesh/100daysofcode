// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/stones-love/
// 24-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numDaysCollected, numQueries;
    scanf("%d %d", &numDaysCollected, &numQueries);
    ll cumulativeSumOfStonesCollected[numDaysCollected] = {0};
    scanf("%d",&cumulativeSumOfStonesCollected[0]);
    int stonesCollectedToday;
    for(int i = 1; i < numDaysCollected; i++){
        scanf("%d", &stonesCollectedToday);

        cumulativeSumOfStonesCollected[i] = cumulativeSumOfStonesCollected[i - 1] + stonesCollectedToday;
    }
    
    int question;
    while(numQueries--){
        scanf("%d", &question);
        ll* day = lower_bound(cumulativeSumOfStonesCollected, cumulativeSumOfStonesCollected+numDaysCollected, question);
        printf("%lld\n",(day - cumulativeSumOfStonesCollected)+1);
    }
}