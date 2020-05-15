// https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/tutorial/
// 15-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    string needle, haystack;
    cin >> needle >> haystack;
    int numOccurrence = 0;
    for(int i = 0; i < haystack.length(); ++i){
        if(haystack.substr(i, needle.length()) ==  needle)
            ++numOccurrence;
    }
    cout << numOccurrence;
}