// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lexicographic-maximum-bit-shift-bbb95118/
// 20-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numValues;
    cin >> numValues;
    unsigned long long value, a1;
    int j, j1;
    
    while(numValues--){
        cin >> value;
        j = 0, j1 = 0, a1 = 0;
        
        while(value != 0){
            if(!(value & 1)){
                ++j1;
            }
            ++j;
            value >>= 1;
        }

        a1 = 0;
        a1 += pow(2, j);
        a1 -= pow(2,j1);
        cout << a1 << " ";
    }
}