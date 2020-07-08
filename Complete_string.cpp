// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/complete-string-4/
// 08-07-2020 Very-easy/easy
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
        vector<bool> allChars(26, false);
        string str;
        cin >> str;

        for(char &i: str){
           allChars[i-'a'] = true;
        }
        
        bool answered = false;

        for(bool i: allChars){
            if(!i){
                cout << "NO\n";
                answered = true;
                break;
            }
        }

        if(!answered){
            cout << "YES\n";
        }

    }
    
    return 0;
}