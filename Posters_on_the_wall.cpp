// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/posters-on-the-wall/
// 09-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int length, height;
    cin >> length >> height;

    vector<vector<int>> wall(length, vector<int>(height, 1));
    int numPosters;
    cin >> numPosters;
    
    while(numPosters--){
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
    
        for(int i = X1; i < X2; ++i){
    
            for(int j = Y1; j < Y2; ++j){
                wall[i][j] = 0;
            }
    
        }
    
    }

    ll RES = 0;
    
    for(int i = 0; i < wall.size(); ++i){
        RES += accumulate(wall[i].begin(), wall[i].end(), 0);
    }
    
    cout << RES << endl;

    return 0;
}