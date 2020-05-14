// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/tutorial/
// 14-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int start, end;
        string input;
        cin >> input >> start >> end;
        string section(input.substr(start, end-(start-1)));
        sort(section.begin(), section.end(), greater<char>());
        cout << (input.substr(0, start) + section + input.substr(end+1)) << endl;
    }
}