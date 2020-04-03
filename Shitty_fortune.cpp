// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/shitty-fortune/
// 03-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    int len = s.length();
    if(len == 1)
        return true;
    for(int i = 0; i <= len/2; i++){
        if(s[i] != s[len-i-1])
            return false;
    }
    return true;
}

int main(){
    int testcases, k;
    bool flag = false;
    cin >> testcases;
    while(testcases--){
        string s;
        cin >> s >> k;
        long long size = s.length() / k;
        if(size != 0){
            if(s.length() % size != 0){
                cout << "NO" << endl;
                continue;
            }
            if((size == 1) && (s.length() % k != 0)){
                cout << "NO" << endl;
                flag = true;
            }
        }else{
            size = s.length();
        }
        if(!flag)
        for(long long i = 0; i < s.length(); ){
            if(!isPalindrome(s.substr(i,size))){
                flag = true;
                cout << "NO" << endl;
                break;
            }else{
                i += size;
            }
        }
        if(!flag)
            cout << "YES" << endl;
        flag = false;
    }
}