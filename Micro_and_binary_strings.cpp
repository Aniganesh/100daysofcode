// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/micro-and-binary-strings/
// 20-06-2020 Very-easy/easy
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
        int size;
        string bin;
        cin >> size >> bin;
        int RES = 0;

        for(char c: bin){
            RES += c=='1';
        }

        cout << RES << endl;
    }

    return 0;
}