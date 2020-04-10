// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/kth-character-60eed906/
// 09-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string input;
    cin >> input;
    string alphabets = "abcdefghijklmnopqrstuvwxyz", copy = input;
    vector<string> allStrings;
    for(int i = 0; i < 26; i++){
        copy.erase(remove(copy.begin(), copy.end(), alphabets[i]), copy.end());
        allStrings.push_back(copy);
        copy = input;
    }
    sort(allStrings.begin(), allStrings.end());
    cout << allStrings[0];
}