// https://www.hackerearth.com/problem/algorithm/odd-from-end-9a87c149/
// 31-05-2020 Very-easy/easy

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
        cin >>  numValues;

        stack<int> oddVals;
        while(numValues--){
            int val;
            cin >> val;
            if(val&1)
                oddVals.push(val);
        }
        
        if(oddVals.empty()){
            cout << "None to display\n";
            continue;
        }

        while(!oddVals.empty()){
            cout << oddVals.top() << " ";
            oddVals.pop();
        }
        cout << endl;
    }
    
    return 0;
}