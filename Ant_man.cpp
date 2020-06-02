// https://www.hackerearth.com/problem/algorithm/p1-31/
// 02-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string antmanString;
    cin >> antmanString;
    
    long firstN;
    cin >> firstN;

    int numAs = 0;
    for(char i: antmanString){
        numAs += (i == 'a');
    }

    ll RES = (firstN/antmanString.length()) * numAs;
    int tempNumAs = 0;
    
    for(int i = 0; i < firstN%antmanString.length(); ++i){
        tempNumAs+= (antmanString[i] == 'a');
    }

    cout << RES + tempNumAs;
    return 0;
}