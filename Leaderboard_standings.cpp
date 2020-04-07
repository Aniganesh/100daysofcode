// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/leaderboard-standingss-863c4cc2/
// 07-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool contestSort(pair< string, pair<int, int> > A, pair< string, pair<int, int> > B){
    if(A.second.first > B.second.first)
        return true;
    if(A.second.first == B.second.first){
        if(A.second.second < B.second.second)
            return true;
        if(A.second.second == B.second.second)
            return A.first < B.first;
        return false;
    }
    return false;
}

int main(){
    ll numentries;
    cin >> numentries;
    map<string, pair<int, int> > Contestants;
    ll count = 0;
    while(numentries--){
        string name;
        cin >> name;
        int time;
        cin >> time;
        Contestants[name].first++;
        Contestants[name].second += time;
    }
    vector< pair< string, pair<int, int> > > vecContestants(Contestants.begin(), Contestants.end());
    sort(vecContestants.begin(), vecContestants.end(), contestSort);
    for(int j = 0; j < vecContestants.size(); j++)
        cout << j + 1 << " " << vecContestants[j].first << endl;
}