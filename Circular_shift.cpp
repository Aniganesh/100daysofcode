// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lets-shift-2-36d90caa/
// 09-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        uint16_t num;
        int numRotations;
        char direction;
        cin >> num >> numRotations >> direction ;
        const unsigned int mask = (CHAR_BIT*sizeof(num) - 1);
        numRotations &= mask;
        if(direction =='L'){
            cout << (uint16_t)((num<<numRotations) | (num >> ((-numRotations) & mask))) << endl;
        }else{
        cout << (uint16_t)((num>>numRotations) | (num << ((-numRotations) & mask)) )<< endl;
        }
    }
}
