// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/counting-frog-paths-1abd84d5/
// 22-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int X, Y, side, time;
    cin >> X >> Y >> side >> time;
    int possibileDots = 0;
    for(int x = X; x < X+side+1; x++){
        for(int y = Y; y < Y+side+1; y++){
            if(x+y <= time)
                possibileDots++;
        }
    }
    cout << possibileDots;
}