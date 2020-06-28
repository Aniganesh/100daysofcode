// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/bracket-sequence-1-40eab940/
// 28-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
   cin.tie(0);
   cout.tie(0);
   ios_base::sync_with_stdio(0);
   string s;
   cin >> s;
   map<int, int> resMap;
   int su = 0;
    for(char c : s){
        su += (c == '(' ? +1 : -1);
        ++resMap[su];
    }

    cout << ((su == 0)*resMap.begin()->second) << endl;
}