// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bear-and-medals/
// 22-06-2020 Very-easy/easy
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
        int numFriends;
        cin >> numFriends;
        int medalsGivenToFriends[3] = {0,0,0};
        int RES = 0;

        while(numFriends--){
            int person = 0;
            for(int i = 0; i < 3; ++i){
                int a;
                cin >> a;
                person += a;
                medalsGivenToFriends[i] += a;
            }
            RES = max(person, RES);
        }
        
        for(int i = 0; i < 3; ++i){
            RES = max(RES, medalsGivenToFriends[i]);
        }

        cout << RES << endl;
    }

    return 0;
}