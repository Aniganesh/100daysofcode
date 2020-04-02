// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/killjee-and-superdromes-1f1d31c3/
// 02-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int isPalindrome(long long n){
    int digits[10], i = 0;
    while(n){
        digits[i] = n % 10;
        n /= 10;
        i++;
    }
    for(int x = 0; x < i/2; x++){
        if(digits[x] != digits[i-x-1])
            return 0;
    }
    return 1;
}

int isBinaryPalindrome(long long n){
    string digits;
    int i = 0;
    while(n){
        if(n%2)
            digits.push_back('1');
        else
            digits.push_back('0');
        i++;
        n /= 2;
    }
    for(int j = 0; j < digits.size()/2; j++){
        if(digits[j] != digits[digits.size() - j - 1])
            return false;
    }
    return true;
}

int main(){
    int testcases;
    cin >> testcases;
    long long numsToCheck[testcases], *numPalindromes = new long long int[1000001];
    for(int i = 0; i < testcases; i++)
        cin >> numsToCheck[i];
    for(int i = 1; i < 1000001; i++)
        numPalindromes[i] = numPalindromes[i-1] + (isPalindrome(i) && isBinaryPalindrome(i));
    for(int i = 0; i < testcases; i++)
        cout << numPalindromes[numsToCheck[i]] <<  endl;
}