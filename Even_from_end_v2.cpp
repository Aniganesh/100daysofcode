// https://www.hackerearth.com/problem/algorithm/even-from-end-v2/
// 30-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    while(!cin.eof()){
        int numValues;
        cin >> numValues;
        int val;
        stack<int> evenNums;

        while(numValues--){
            cin >> val;
            
            if(!(val & 1)){
                evenNums.push(val);
            }
        }

        if(evenNums.empty()){
            cout << "Nothing to print!\n";
            continue;
        }

        while(!evenNums.empty()){
            cout << evenNums.top() << ' ';
            evenNums.pop();
        }
        cout << endl;

    }
}