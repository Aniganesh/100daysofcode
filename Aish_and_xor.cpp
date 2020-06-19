// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/aish-and-xor-2/
// 19-06-2020 Medium
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
    bool values[numValues+1] = {0};
    int numSetBits[numValues+1] = {0};
    for(int i = 1; i < numValues+1; ++i){
        cin >> values[i];
    }

    for(int i = 1; i < numValues+1; ++i){
        numSetBits[i] = numSetBits[i-1] + values[i];
    }
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int left, right;
        cin >> left >> right;
        cout << (numSetBits[right] - numSetBits[left-1] & 1? 1: 0) << " ";
        cout << (right-(left-1)) - (numSetBits[right]-numSetBits[left-1]) << endl;
    }
}