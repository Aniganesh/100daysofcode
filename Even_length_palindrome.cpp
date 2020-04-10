// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pepper-and-palindromic-love-76ae8763/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll nthPalindrome;
        cin >> nthPalindrome;
        if(nthPalindrome>=1 && nthPalindrome <= 9){
            cout << nthPalindrome << endl;
            continue;
        }
        ll palindrome[11] = {0};
        while(nthPalindrome){
            palindrome[nthPalindrome%10]++;
            nthPalindrome /= 10;
        }
        int max = 0, reps;
        for(int i = 0; i < 11; i++){
            if(palindrome[i] > max){
                max = palindrome[i];
                reps = i;
            }
        }
        cout << reps << endl;
    }
}