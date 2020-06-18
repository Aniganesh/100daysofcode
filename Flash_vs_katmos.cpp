// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sorting-1-581e9aa0/
// 18-06-2020 Very-easy/easy
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
        int numPlaces;
        cin >> numPlaces;
        ll coordinates[numPlaces];
        vector<pair<int, int>> finalOrder;

        for(int i = 0; i < numPlaces; ++i){
            cin >> coordinates[i];
            ll temp = coordinates[i];
            int numSetBits = 0;
            while(temp){
                ++numSetBits;
                temp &= (temp-1);
            }
            finalOrder.push_back({numSetBits, i});
        }

        sort(finalOrder.begin(), finalOrder.end());

        for(int i = 0; i < numPlaces; ++i){
            cout << coordinates[finalOrder[i].second] << " ";
        }
        
        cout << endl;
    }

    return 0;
}