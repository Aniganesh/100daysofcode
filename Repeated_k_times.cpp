// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/counting-frog-paths-1abd84d5/
// 22-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    map<int, int> intFrequency;
    int numValues;
    cin >> numValues;
    int num;
    while(numValues--){
        cin >> num;
        intFrequency[num]++;
    }
    int numReqReps;
    cin >> numReqReps;
    for(int i = 0; i < 1e5+1; i++){
        if(intFrequency[i] == numReqReps){
            cout << i;
            break;
        }
    }   
}