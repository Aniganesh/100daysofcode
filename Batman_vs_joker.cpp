// https://www.hackerearth.com/problem/algorithm/batman-vs-joker-8/
// 04-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int numCaught = 0, numMissed = 0;
    int caught;
    int scanned = scanf("%d",&caught);
    while(scanned == 1){    
        if(caught == 1)
            ++numCaught;
        else if(caught == 0)
            ++numMissed;
        scanned = scanf("%d",&caught);
    }
    
        cout << "catches " << numCaught << "\nmissed " << numMissed;
   
    return 0;
}