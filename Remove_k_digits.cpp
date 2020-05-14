// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328/
// 14-05-2020 Very-easy/easy
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == 0){
            return num;
        }
        
        if(k >= num.length()){
            return "0";
        }
        int numNumbersToRemove = k;
        string RES = "";
        for(int i = 0; i < num.length(); ++i){
            while((k > 0) && (RES.length() > 0) && (RES.back() > num[i])){
                --k;
                RES.pop_back();
            }
            RES += num[i];
        }
        RES.resize(num.length()-numNumbersToRemove);
        // If digits in the number are in ascending order, then none of the numbers will get removed in the for loop.
        // Then the solution is to remove last k numbers.
        // If the digits are removed properly, the resize will fit the result properly.
        while(RES[0] == '0'){
            RES.erase(0,1);
        }
        if(RES == "")
            RES = "0";
        return RES;
    }
};