// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/compare-strings-1-1cb66e03/
// 25-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;



int main(){
    int numChars, numQueries;
    scanf("%d %d", &numChars, &numQueries);
    string first(numChars+1, '\0'), second(numChars+1, '\0');
    set<int> changes;
    scanf("%s %s", first.begin(), second.begin());
   /* If first[i] is 1 and second[i] is 0, then lexicographic order of second increases if   
    * it is replaced by 1.  If second[i] is already 1 and first[i] is also 1, then the 
    * relative  lex. order does not change when second[i] is replaced by 1. If first[i] is 0
    * and second[i] is 1 then from that point onwards the relative lex. order will always be
    * positive i. e., second will be greater than or equal to first if all chars before that 
    * i is 1.
    * So for all i satisfying the first condition, insert them into the set. All others 
    * neglected. If given position is in the set, remove it. Once the set size becomes 0, 
    * answers for all queries will be YES.
    */ 
    for(int i = 0; i < first.length(); i++){
        if(first[i] == '1' && second[i] == '0')
            changes.insert(i + 1);
        else if(first[i] == '0' && second[i] == '1')
            break;
    }

    while(numQueries--){
        int pos;
        scanf("%d", &pos);
        if(changes.find(pos) != changes.end())
            changes.erase(pos);
        if(changes.size() == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}