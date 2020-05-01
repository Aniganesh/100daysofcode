// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11/
// 28-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    long count = 0;
    string::iterator i = s.begin();
    while(i != s.end()){
        if(*i!='6')
            count++;
        i++;
    }
    if(*(i-1) != '6')
        cout << count;
    else
        cout << -1;
    return 0;
}