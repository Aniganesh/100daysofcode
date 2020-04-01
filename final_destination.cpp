// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/final-destination-cakewalk/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int x = 0, y = 0;
    cin >> s;
    for(char dir:s){
        if(dir == 'L')
            x--;
        if(dir == 'U')
            y++;
        if(dir == 'R')
            x++;
        if(dir == 'D')
            y--;
    }
    cout << x << " " << y;
}
