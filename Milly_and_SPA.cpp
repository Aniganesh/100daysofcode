// https://www.hackerearth.com/problem/algorithm/milly-and-spa-3/
// 02-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        string givenString;
        cin >> givenString;
        map<char, int> alphaFreq, alphaWeight;

        for(char i : givenString){
            ++alphaFreq[i];
        }
        
        for(char i = 'a'; i <= 'z'; ++i){
            int weight;
            cin >> weight;
            alphaWeight[i] = weight;
        }

        double RES = 0, totalWeight = 0;
        
        unordered_set<char> unique(givenString.begin(), givenString.end());
        
        for(char i: unique){
            totalWeight += alphaWeight[i];
        }

        for(pair<char, int> i : alphaFreq){
            RES += 10*(i.second * alphaWeight[i.first]);
        }

        RES /= (givenString.length()*totalWeight);
        cout << fixed;
        cout << setprecision(2) << RES << endl;
    }
}
