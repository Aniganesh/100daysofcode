// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/white-space-3/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string input;
    getline(cin, input);
    int numSpaces = 0;
    for(char i: input)
        if(i == ' ')
            numSpaces++;
    cout << numSpaces;
}