// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/chakra-numbers-9c9e0faf/
// 14-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

bool isSpecial(int& n){
    bitset<32> bits(n);
    for(int i = 0; i < 31; ++i){
        if(bits[i] && bits[i+1])
            return true;
    }
    return false;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numValues;
    int numTestcases;
    cin >> numValues >> numTestcases;
    int values[numValues+1];
    int countSpecial[numValues+1];
    countSpecial[0] = 0;

    for(int i = 1; i <= numValues; ++i){
        cin >> values[i];
    }

    for(int i = 1; i <= numValues; ++i){
        countSpecial[i] = countSpecial[i-1] + isSpecial(values[i]);
    }
    
    while(numTestcases--){
        int left, right;
        cin >> left >> right;
        cout << countSpecial[right]-countSpecial[left-1]<<endl;
    }
    
    return 0;
}