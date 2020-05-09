// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subham-and-binary-strings/
// 09-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int stringLength;
        cin >> stringLength;
        int numEvenNums = 0;
        char bit;
        for(int i = 0; i < stringLength; ++i){
            cin >> bit;
            if(bit == 48)
                ++numEvenNums;
        }
        cout << numEvenNums << endl;
    }
}
// Turns out there is no need to rotate the binary string at all.
// Just counting number of ones in the string is sufficient since the number of rotations is the same as the number of bits in the value.