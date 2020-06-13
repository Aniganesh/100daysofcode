// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/a-95/
// 13-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int givenNum;
    cin >> givenNum;
    bitset<32> inverse(givenNum);
    int numBitsInNum = log2(givenNum)+1;

    for(int i = 0; i < numBitsInNum; ++i){
        inverse.flip(i);
    }

    cout << givenNum << " " << inverse.to_ulong() << endl;
}