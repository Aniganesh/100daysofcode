// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-ciphers/
// 06-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isPalin(string str){
    for(int i = 0;i < str.length(); i++){
        if(str[i]!=str[str.length()-i-1])
            return false;
    }
    return true;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll mult = 1;
        string palindrome;
        cin >> palindrome;
        if(!isPalin(palindrome)){
            for(char character: palindrome)
                mult = (mult * (character - 96)) ;
            cout << mult << endl;
        }else{
            cout << "Palindrome" << endl;
        }

    }
}