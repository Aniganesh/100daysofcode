// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sherlock-and-numbers/
// 23-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;
 
using namespace std;
 
int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        set<int> allNumsTillN;
        int uptoN;
        scanf("%d", &uptoN);
        for(int i = 1; i < uptoN+1; i++){
            allNumsTillN.insert(i);
        }
        int numElementsRemoved, kthSmallest;
        scanf("%d %d", &numElementsRemoved, &kthSmallest);
        int num;
        while(numElementsRemoved--){
            scanf("%d", &num);
            const int remove = num;
            allNumsTillN.erase(remove);
        }
        if(kthSmallest > allNumsTillN.size())
            printf("-1\n");
        else{
            set<int>::iterator it = allNumsTillN.begin();
            advance(it, kthSmallest-1);
            printf("%d\n", *it);
        }
    }
}