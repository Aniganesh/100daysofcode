// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/star-studded-lockdown/
// 17-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int numStars;
        cin >> numStars;
        unordered_map<char, ll> starAlphaFrequency;
        string freqString;
        cin >> freqString;
        vector<ll> RESBUILDER;
        for(char i: freqString){
            if(starAlphaFrequency.find(i) == starAlphaFrequency.end()){
                starAlphaFrequency[i] = 0;
                continue;
            }
            ++starAlphaFrequency[i];
            RESBUILDER.push_back(starAlphaFrequency[i]);
        }
        cout << accumulate(RESBUILDER.begin(), RESBUILDER.end(),(ll) 0) << endl;
    }
}