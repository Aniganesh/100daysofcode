// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/
// 21-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        string number;
        cin >> number;
        if(number.find("21") != string::npos || stol(number) % 21 == 0)
            cout << "The streak is broken!\n";
        else
            cout << "The streak lives still in our heart!\n";
            
    }
}
