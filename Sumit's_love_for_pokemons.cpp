// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sumit-and-chocolates-c9e3069d/
// 24-04-2020 Very-easy/easy
// Refer https://www.geeksforgeeks.org/maximum-length-substring-having-all-same-characters-after-k-changes/
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int lenString, kaltiMoves;
        cin >> lenString >> kaltiMoves;
        string input;
        cin >> input;
        int RES = INT_MIN;
        for(int i = 0; i < 26; i++){
            int moves = kaltiMoves;
            int left = 0, right = 0, curr = 0, a = 0, b = 0;
            for(int j = 0; j < lenString; j++){
                if(input[j] == i + 97)
                    a++;
                else
                    b++;
                if(b > moves){
                    if(input[left] != i + 97)
                        b--;
                    left++;
                }else{
                    curr++;
                }
            }
            RES = max(RES, curr);
        }
        for(int i = 0; i < 26; i++){
            int moves = kaltiMoves;
            int left = 0, right = 0, curr = 0, a = 0, b = 0;
            for(int j = 0; j < lenString; j++){
                if(input[j] == i + 65)
                    a++;
                else
                    b++;
                if(b > moves){
                    if(input[left] != i + 65)
                        b--;
                    left++;
                }else{
                    curr++;
                }
            }
            RES = max(RES, curr);
        }
        cout << RES << endl;
    }
}