// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/
// 08-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string sequence;
        cin >> sequence;
        stack<char> matchedBrackets;
        bool answered = false;
        for(char i: sequence){
            if(!matchedBrackets.empty()){
                if(i == ')'){
                    if('(' == matchedBrackets.top()){
                        matchedBrackets.pop();
                    }else{
                        cout <<"NO\n";
                        answered = true;
                        break;
                    }
                    continue;
                }
                if(i == ']'){
                    if('[' == matchedBrackets.top()){
                        matchedBrackets.pop();
                    }else{
                        cout << "NO\n";
                        answered = true;
                        break;
                    }
                    continue;
                }
                if(i == '}'){
                    if('{' == matchedBrackets.top()){
                        matchedBrackets.pop();
                    }else{
                        cout << "NO\n";
                        answered = true;
                        break;
                    }
                    continue;
                }
                matchedBrackets.push(i);
            }else{
                matchedBrackets.push(i);
            }
        }
        if(matchedBrackets.empty() && !answered){
            cout << "YES\n";
        }else if (!answered){
            cout << "NO\n";
        }
    }
}