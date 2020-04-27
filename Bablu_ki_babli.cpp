// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bablu-ki-babli-51f74021/
// 27-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    
    int numDays, numQueries;
    scanf("%d %d", &numDays, &numQueries);
    ll sumChocolates[numDays+1];
    sumChocolates[0] = 0;

    for(int i = 1; i < numDays+1; i++){
        scanf("%lld", &sumChocolates[i]);
        sumChocolates[i] += sumChocolates[i-1];
    }

    while(numQueries--){
        int numChocolates;
        scanf("%d", &numChocolates);
        printf("%lld\n",lower_bound(sumChocolates, sumChocolates+numDays+1, numChocolates) - sumChocolates);

    }
}