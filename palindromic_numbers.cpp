// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-numbers-7/
// 05-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isPalindrome(long a){
    if(a >= 0 && a < 10)
        return true;
    int i = 0, digits[6];
    while(a){
        digits[i] = a % 10;
        a /= 10;
        ++i;
    }
    for(int x = 0; x < i/2; x++)
        if(digits[x]!= digits[i-x-1])
            return false;
    return true;
}

int main(){
    bool *Palindromes = (bool*)calloc(1000000, sizeof(bool));
    for(long i = 0; i < 1000000; i++){
        Palindromes[i] = isPalindrome(i);
    }
    int testcases;
    cin >> testcases; 
    while(testcases--){
        long count = 0;
        long min, max;
        cin >> min >> max;
        for(; min <= max; min++)
            count += Palindromes[min];
        cout << count << endl;
    }
}