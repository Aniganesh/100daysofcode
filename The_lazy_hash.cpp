// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hash-and-cookies-d35e9dba/
// 19-06-2020 Very-easy/easy
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
        ll numCookies;
        cin >> numCookies;
        int numSetBits = 0;
        
        if(numCookies == 0){
            cout << "0\n";
            continue;
        }

        while(numCookies){
            ++numSetBits;
            numCookies &= (numCookies-1);
        }
        
        cout << numSetBits << endl;
    }
}