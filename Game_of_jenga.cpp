// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/game-of-jenga/
// 23-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
 
    int height;
    cin >> height;
    map<ll,array<int,3> > tower;
    map<char, int> pos;
    pos['L'] = 0, pos['M'] = 1, pos['R'] = 2;

    int numChances;
    cin >> numChances;
    int mini = 1;

    for(int i = 1; i < numChances+1; ++i){
        int level;
        char removedSide;
        cin >> level >> removedSide;
        
       --tower[level][pos[removedSide]];
        if(tower[level][0]+tower[level][1]+tower[level][2] == -2 and tower[level][1] == -1 and level != mini){
            cout << i;
            return 0;
        }
        if(tower[level][0]+tower[level][1]+tower[level][2] == -3 && level == mini)
            ++mini;
    }
    cout << -1;
    return 0;
}