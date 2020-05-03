// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3285/
// 03-05-2020 Very-easy/easy
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int RES = INT_MIN;
        vector<int> sums;
        sums.push_back(0);
        nums.insert(nums.begin(),0);
        for(int i = 1; i < nums.size(); i++){
            sums.push_back(sums[i-1]+nums[i]);
        }
        for(int i = 1; i < sums.size(); i++){
            for(int j = sums.size()-1; j >= i; j--){
                RES = max(RES, sums[j] - sums[i-1]);
            }
        }
        return RES;
    }
};