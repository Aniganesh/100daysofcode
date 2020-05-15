// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
// 15-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int num;
        cin >> num;
        int numSetBits = 0;
        while(num){
            bool bit = num % 2;
            numSetBits += bit;
            num /= 2;
        }
        cout << numSetBits << endl;
    }
}