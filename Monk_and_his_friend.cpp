// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-his-friend/
// 15-06-2020 Very-easy/easy
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
        ll monkChoice, puchiChoice;
        cin >> monkChoice >> puchiChoice;
        ll diffBits = monkChoice^puchiChoice;
        bitset<64> bits(diffBits);
        int count = 0;

        for(int i = 0; i < 64; ++i){
            count += bits[i];
        }
        
        cout << count << endl;
    }
}