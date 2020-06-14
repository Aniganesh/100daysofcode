// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xsquare-and-two-strings-1/
// 14-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        string firstString, secondString;
        cin >> firstString >> secondString;
        bool yes = false;

        for(char i: firstString){
            if(secondString.find(i) != string::npos){
                yes = true;
                break;
            }
        }

        if(!yes){
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }
}