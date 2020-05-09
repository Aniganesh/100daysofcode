// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-castle-gate-july-easy/
// 09-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    vector<int> allNumsBelow2000;
    for(int i = 0; i < 2001; ++i){
        allNumsBelow2000.push_back(i);
    }
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int maxNum, RES = 0;
        cin >> maxNum;
        for(int i = 1; i < maxNum; ++i){
            for(int j = i+1; j <= maxNum; ++j){
                if((allNumsBelow2000[i]^allNumsBelow2000[j]) <= maxNum){
                    ++RES;
                }
            }
        }
        cout << RES << endl;
    }
}
/* 
Answer in O(2logn)
www.hackerearth.com/problem/algorithm/the-castle-gate-july-easy/editorial/?scroll-id=comments-298-3291&scroll-trigger=inview#c215840
Very cool solution.
*/