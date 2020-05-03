// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3286/
// 03-05-2020 Very-easy/easy
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> RES;
        for(int i: nums){
            if(i != 0){
                RES.push_back(i);
            }
        }
        int sz = nums.size();
        while(RES.size() < sz){
            RES.push_back(0);
        }
        nums = RES;
    }
};