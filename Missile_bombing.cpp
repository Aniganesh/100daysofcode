// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/missile-bombing-cd56ab51/
// 27-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int fieldSize, numMissiles;
    cin >> fieldSize >> numMissiles;
    int field[fieldSize+1][fieldSize+1] = {0};
    while(numMissiles--){
        int power,x1, y1, x2, y2;
        cin >> power >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i <= x2; ++i){
            for(int j = y1; j <= y2; ++j){
                field[i][j] ^= power;
            }
        }
    }
    for(int i = 1; i <= fieldSize; ++i){
        for(int j = 1; j <= fieldSize; ++j){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    
    return  0;
}
