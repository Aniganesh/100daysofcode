// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/attendance-70-3369f484/
// 09-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool check(string a, int num){
    string req = to_string(num);
    for(int i = 0; i < a.length(); i++){
        if(a[i]!=req[i] && a[i] != '*')
            return false;
    }
    return true;
}

int main(){
    cin.tie();
    cin.sync_with_stdio();
    vector<ll> squares[6];
    for(int i = 1; i <= 100; i++){
        int temp = i*i;
        squares[to_string(temp).length()].push_back(temp);
    }
    
    string input;
    cin >> input;

    if(input.length() > 5)
        cout << 0 << endl;
    else{
        bool found = false;
        for(int i = 0; i < squares[input.length()].size(); i++){
            if(check(input, squares[input.length()][i])){
                found = true;
                cout << sqrt(squares[input.length()][i]);
                break;
            }
        }
        if(!found)
            cout << 0;
    }
}