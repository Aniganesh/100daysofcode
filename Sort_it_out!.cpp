// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/#c228010
// 14-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    vector<pair<long, int> > givenValues;
    long current;
    scanf("%d", &numValues);
    for(int i = 0; i < numValues; ++i){
        scanf("%ld", &current);
        givenValues.push_back({current, i});
    }
    sort(givenValues.begin(), givenValues.end());
    for(pair<long, int> i: givenValues){
        printf("%d ", i.second);
    }
}