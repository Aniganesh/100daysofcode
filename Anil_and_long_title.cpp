// https://www.hackerearth.com/problem/algorithm/anil-and-long-title-2/
// 02-060-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string title;
    cin >> title;

    for(int i = 0; i < title.length(); ++i){
        if(i!=0){
            if(title[i-1] == '_'){
                cout << (char) toupper(title[i]);
            }else{
                cout << title[i];
            }
        }else{
            if(isalpha(title[i])){
                cout << (char) toupper(title[i]);
            }else{
                cout << title[i];
            }
        }
    }

    return 0;
}