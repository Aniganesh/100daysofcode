// https://www.hackerearth.com/problem/algorithm/dexters-payback-1/
// 03-06-2020 Very-easy/easy
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
        int height, width;
        cin >> height >> width;
        bool floor[height][width];
        int numBombs = 0;

        for(int i = 0; i < height; ++i){
            for(int j = 0; j < width; j++){
                floor[i][j] = false;
                if(j-2>= 0){
                    if(floor[i][j-2] == true){
                        continue;
                    }
                }
                if(i-2 >= 0){
                    if(floor[i-2][j] == true){
                        continue;
                    }
                }
                floor[i][j] = true;
                ++numBombs;
            }
        }

        cout << numBombs << endl;
    }
}