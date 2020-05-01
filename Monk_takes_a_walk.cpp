// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
// 20-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string treeChars, vowels = "AEIOUaeiou";
        cin >> treeChars;
        int RES = 0;
        for(char I: treeChars)
            if(vowels.find(I) != string::npos)
                RES++;
        cout << RES << endl;
    }
}