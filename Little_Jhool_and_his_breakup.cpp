// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/little-jhool-and-his-breakup
// 13-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string message;
    cin >> message;

    int firstL = message.find('l');
    auto o = find(message.begin()+firstL, message.end(),'o');
    auto v = find(message.begin()+int(o-message.begin()), message.end(), 'v');
    auto e = find(message.begin()+int(v-message.begin()), message.end(), 'e');
    if(firstL != string::npos && o != message.end() && v != message.end() && e != message.end())
        cout << "I love you, too!";
    else
        cout << "Let us breakup!";
}