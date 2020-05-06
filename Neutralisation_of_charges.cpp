// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charges-repel/
// 06-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int lengthOfString;
    cin >> lengthOfString;
    stack<char> reqChars;
    char temp;
    for(int i = 0; i < lengthOfString; i++){
        cin >> temp;
        if(reqChars.empty()){
            reqChars.push(temp);
        }else if(temp == reqChars.top()){
            reqChars.pop();
        }else{
            reqChars.push(temp);
        }
    }
    vector<char> RES;
    while(!reqChars.empty()){
        RES.push_back(reqChars.top());
        reqChars.pop();
    }
    reverse(RES.begin(), RES.end());
    cout << RES.size() << endl;
    for(int i = 0; i  < RES.size(); i++)
        cout << RES[i];
}