// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/not-decided-1ca0c947/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    cin.tie();
    ios::sync_with_stdio();
    int numNumbers;
    cin >> numNumbers;
    set<ll> inBag;
    ll number;
    cin >> number;
    inBag.insert(number);
    cout << "-1 -1" << endl;
    numNumbers--;
    while(numNumbers--){
        cin >> number;
        inBag.insert(number);
        set<ll>::iterator position = inBag.find(number), nextPosition = position, prevPosition = position;
        if(position == inBag.begin())
            cout << "-1 ";
        else
            cout << *(--prevPosition) << " ";
        if(*position == *inBag.rbegin())
            cout << "-1\n";
        else
            cout << *(++nextPosition) << endl;
        
    }
}