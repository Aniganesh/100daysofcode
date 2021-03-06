// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-his-father/
// 14-06-2020 Very-easy/easy
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
        ll reqAmt;
        cin >> reqAmt;
        bitset<64> bits(reqAmt);
        int count = 0;
  	    
        for(int i = 0; i < 64; ++i){
          count += bits[i];
        }
  	    
        cout << count << endl;
    }
}
