// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-kuldeep-and-contests/
// 09-04-2020 Very-easy/easy

#include<bits/stdc++.h>
using namespace std;

int main(){
    int numEvents;
    cin >> numEvents;
    vector<pair<long long, long long> > eventTimings;
    int starth, startm, endh, endm;
    for(int i = 0; i < numEvents; i++){
        scanf("%d:%d-%d:%d", &starth, &startm, &endh, &endm);
        eventTimings.push_back({starth*3600 + startm*60, endh*3600 + endm*60});
    }
    sort(eventTimings.begin(), eventTimings.end());
    
    for(int i = 0; i < numEvents-1; i++){
        if(eventTimings[i].first < eventTimings[i+1].first && eventTimings[i].second > eventTimings[i+1].first){
            cout << "Will need a moderator!"; return 0;
        }
    }
    cout << "Who needs a moderator?";
}