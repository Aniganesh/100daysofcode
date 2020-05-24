// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-tasks/
// 24-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int countSetBits(long long x){
    int count = 0, bit;
    while(x){
        bit = x & 1;
        x >>= 1;
        count += bit;
    }
    return count;
}

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numTasks;
        cin >> numTasks;
        vector<pair<int,pair<int, ll>> > orderOfTasks(numTasks);
        ll numTasksOnIthDay;

        for(int i = 0; i < numTasks; ++i){
            cin >> numTasksOnIthDay;
            orderOfTasks[i] = {countSetBits(numTasksOnIthDay), {i, numTasksOnIthDay}};
            // i is included to keep the sorting stable. The second element is considered if the first element of two pairs is equal.
        }
        
        sort(orderOfTasks.begin(), orderOfTasks.end());

        for(int i = 0; i < orderOfTasks.size()-1; ++i){
            cout << orderOfTasks[i].second.second << " ";
        }
        cout << orderOfTasks[orderOfTasks.size()-1].second.second;
        cout << endl;
    
    }
}