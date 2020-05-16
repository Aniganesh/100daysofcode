// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/equal-armies/
// 16-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int numViruses;
        cin >> numViruses;
        int coordX, coordY, coordZ;
        vector<ll> sums;
        while(numViruses--){
            cin >> coordX >> coordY >> coordZ;
            sums.push_back(coordX+coordY+coordZ);
        }
        sort(sums.begin(), sums.end());
        // for(ll i: sums){
        //     cout << i << endl;
        // }
        bool answered = false;
        ll lowest = sums[0], highest = sums[sums.size()-1];
        while(lowest <= highest){
            ll border = (lowest+highest) / 2;
            int numLeft = lower_bound(sums.begin(), sums.end(), border) - sums.begin();
            int numRight = sums.end() - upper_bound(sums.begin(), sums.end(), border);
            if(numLeft == numRight){
                cout << "YES\n";
                answered = true;
                break;
            }
            if(numLeft < numRight){
                lowest = border + 1;
            }else{
                highest = border - 1;
            }
        }
        if(!answered)
            cout << "NO\n";
    }
    return 0;
}