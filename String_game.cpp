// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/alice-and-string-game-dbd6adc3/
// 31-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    string inputString;
    while(testcases--){
        cin >> inputString;
        set<char> unique;
        unique.insert(inputString.begin(), inputString.end());
        if(unique.size()%2)
            cout << "Player1" << endl;
        else
            cout << "Player2" << endl;
    }
}