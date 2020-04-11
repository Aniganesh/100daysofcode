// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/monk-and-digital-world-code-monk/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    vector<int> alphaFrequency1(26), alphaFrequency2(26);
    string input1, input2;
    cin >> input1 >> input1 >> input2;
    if(input1.length() != input2.length()){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < input1.length(); i++){
        alphaFrequency1[input1[i]-97]++;
    }
    for(int i = 0; i < input2.length(); i++){
        alphaFrequency2[input2[i]-97]++;
    }
    if(alphaFrequency1 == alphaFrequency2)
        cout << "YES";
    else
        cout << "NO";
}