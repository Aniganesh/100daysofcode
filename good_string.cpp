// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/good-string-3/
// 05-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    string badString;
    set<char> unique;
    cin >> badString;
    for(char i: badString)
        unique.insert(i);
    cout << badString.length() - unique.size();
}