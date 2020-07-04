// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/my-girlfriend-and-her-love-for-cats-1/
// 04-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    long numCats;
    cin >> numCats;
    long catStrength[numCats], calorieValue[numCats];
    
    for(long i = 0; i < numCats; ++i){
        cin >> catStrength[i];
    }
    
    for(long i = 0; i < numCats; ++i){
        cin >> calorieValue[i];
    }

    sort(catStrength, catStrength+numCats);
    sort(calorieValue, calorieValue+numCats);
    ll RES = 0;
    
    for(long i = 0; i < numCats; ++i){
        RES += (calorieValue[i]*catStrength[i]);
    }

    cout << RES;
    return 0;
}