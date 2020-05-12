// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rhezo-and-character-frequency-3/
// 12-05-2020
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string input;
    cin >> input;
    char givenChar;
    int lengthOfSubstring;
    cin >> givenChar >> lengthOfSubstring;
    int z = 0, count = 0, index = -1;
    for(int i = 0; i < lengthOfSubstring; ++i){
        count += (input[i]==givenChar);
    }
    z = max(count, z);
    // cout << z << endl;
    // Sliding window technique: 
    for(int i = lengthOfSubstring; i < input.length(); ++i){
        count -= (input[i-lengthOfSubstring] == givenChar);
        count += (input[i] == givenChar);
        z = max(count, z);
        // cout << z << endl;
    }
    if(z == lengthOfSubstring){
        cout << -1 ;
        return 0;
    }
    --lengthOfSubstring;
    count = 0; 
    for(int i = 0; i < lengthOfSubstring; ++i){
        count += (input[i]==givenChar);
    }
    // cout << z << endl;
    if(count == z){
        index = lengthOfSubstring;
    }
    // Sliding window technique:
    for(int i = lengthOfSubstring; i < input.length(); ++i){
        count -= (input[i - lengthOfSubstring] == givenChar);
        count += (input[i] == givenChar);
        // cout << count << endl;
        if(count == z)
            index = i + 1;
    }
    cout << index; 
    return 0;
}