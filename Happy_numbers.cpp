// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3284/
// 03-05-2020 Very-easy/easy
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    bool isHappy(int n) {
        unordered_set<int> sumOfDigitsSquared;
        sumOfDigitsSquared.insert(n);
        while(true){
            int sum = 0;
            while(n){
                int digit = n % 10;
                sum += (digit*digit);
                n /= 10;
            }
            n = sum;
            if(sum == 1)
                return true;
            if(sumOfDigitsSquared.find(sum) != sumOfDigitsSquared.end())
                return false;
            sumOfDigitsSquared.insert(sum);
        }
    }
};
// Help: https://www.youtube.com/watch?v=-JuRAxiJ3xQ&list=PLUg9hRlm7gxT8mrwa_648iC8Ah42E0W1o&index=3