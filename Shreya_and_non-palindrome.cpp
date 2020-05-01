// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/shreya-and-non-palindrome/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    string REV(s.rbegin(), s.rend());
    return (REV == s);
}

int getLengthOfNonpalindrome(string s){
    if(s.length() == 1)
        return 0;
    if(!isPalindrome(s))
        return s.length();
    if(s.front() == s.back()){
        while(s.size() > 1 && s.front() == s.back())
            s.pop_back();
        return getLengthOfNonpalindrome(s);
    }
    string s1(s.begin()+1, s.end());
    string s2(s.begin(), s.end()-1);
    return max(getLengthOfNonpalindrome(s1), getLengthOfNonpalindrome(s2));
}

int main(){
    string s;
    cin >> s;
    string temp;
    int maxLen = getLengthOfNonpalindrome(s);
    cout << maxLen;
}