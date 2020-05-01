// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pop-up-orientation-de6cf0ee/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    string orientations[][2] = {
        {"top-left", "top-right"},
        {"bottom-left", "bottom-right"}
    };
    int testcases;
    cin >> testcases;
    while(testcases--){
        int screenWidth, screenHeight, popWidth, popHeight, iconx, icony, RESx, RESy;
        cin >> screenWidth >> screenHeight >> popWidth >> popHeight >> iconx >> icony;
        if((screenWidth - iconx) >= popWidth)
            RESy=1;
        else
            RESy = 0;
        if(icony >= popHeight)
            RESx = 1;
        else
            RESx = 0;
        cout << orientations[RESx][RESy] << endl;
    }
}