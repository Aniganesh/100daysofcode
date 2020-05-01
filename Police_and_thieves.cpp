// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/joker-and-thieves-53e59f4a/
// 29-04-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    scanf("%d", &testcases);
    char ch;
    while(testcases--){
       int n, maxDist, RES = 0;
       vector<int> thieves, police;
       scanf("%d %d", &n, &maxDist);
       for(int i = 0; i < n; i++){
            thieves.clear();
            police.clear();
            for(int j = 0; j < n; j++){
                cin >> ch;
                if(ch =='P'){
                    police.push_back(j);
                }
                else if(ch=='T'){
                    thieves.push_back(j);
                }
            }
            int thiefPointer = 0, polPointer = 0;

            while(thiefPointer < thieves.size() && polPointer < police.size()){
                if(abs(thieves[thiefPointer] - police[polPointer]) <= maxDist){
                    RES++;
                    thiefPointer++;
                    polPointer++;
                }else if(thieves[thiefPointer] < police[polPointer]){
                    thiefPointer++;
                }else{
                    polPointer++;
                }
            }
       }
       printf("%d\n", RES);
    }
    return 0;
}