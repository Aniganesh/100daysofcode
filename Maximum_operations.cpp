// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/contest-bw-sonika-and-rishika-216a7b6d/
// 04-07-2020 Very-easy/easy
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
        long a, b, n;
        cin >> a >> b >> n;

        if(n%3 == 1){
            cout << a << endl;
        }else if(n%3 == 2){
            cout << b << endl;
        }else{
            int xor_ = a^b;
            int bits = (int) log2(max(a,b))+1;
            int all_ones = (1L << bits) - 1;
            int xnor_ = all_ones^xor_;
            cout << max(xor_, xnor_) << endl;
        }
    }
    return 0;
}