// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-psychic-type/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    bool visited[n+1] = {false}, impossible = false;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int currPos, endPos;
    cin >> currPos >> endPos;
    while(currPos != endPos && !impossible){
        visited[currPos] = true;
        currPos = a[currPos];
        if(visited[currPos]==true)
            impossible = true;
    }
    if(!impossible)
        cout << "Yes";
    else
        cout << "No";
}