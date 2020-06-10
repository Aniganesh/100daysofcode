// https://www.hackerearth.com/problem/algorithm/delete-and-add-your-problem/
// 10-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    ll numChars;
    cin >> numChars;
    ll cCount = 0, aCount = 0;
    while(numChars--){
        char c;
        cin >> c;
        cCount += c=='c';
        aCount += c=='a';
    }
    cout << (aCount > cCount ? "aurora": "codora");
}