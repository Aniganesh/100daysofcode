// https://www.hackerearth.com/problem/algorithm/goku-and-dragonballs-07c87bdb-1e85e642-c5902470/
// 03-06-2020 Medium
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
        int numBalls;
        cin >> numBalls;
        vector<int> ballColours(numBalls);
        
        for(int i = 0; i < numBalls; ++i){
            cin >> ballColours[i];
        }

        sort(ballColours.begin(), ballColours.end());
        
        while(ballColours.size() > 0){
            ballColours.erase(lower_bound(ballColours.begin(), ballColours.end(), ballColours.size()), ballColours.end());
            
            if(ballColours[ballColours.size()-1] != ballColours.size()){
                break;
            }

        }

        if(ballColours.size() > 0){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }

    }
}