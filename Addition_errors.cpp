// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/addition-errors-68e27044/
// 19-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

vector<int> getDigits(ll a){
    vector<int> RES;
    while(a){
        RES.push_back(a%10);
        a /= 10;
    }
    reverse(RES.begin(), RES.end());
    return RES;
}

int main(){
    int testcases;
    cin >> testcases;
    
    while(testcases--){
        ll num1, num2, correctResult;
        cin >> num1 >> num2;
        correctResult = num1 + num2;
        vector<int> num1Digits = getDigits(num1), num2Digits = getDigits(num2);
        string bobResult;
        int num1Last = num1Digits.size()-1, num2Last = num2Digits.size()-1;
        int minAddOps = min(num1Last, num2Last);
        
        while(minAddOps >= 0){
            bobResult.push_back(((num1Digits[num1Last] + num2Digits[num2Last]) % 10) + 48);
            --num1Last, -- num2Last, --minAddOps;
        }

        while(num1Last >= 0){
            bobResult.push_back(num1Digits[num1Last--] + 48);
        }
        while(num2Last >= 0){
            bobResult.push_back(num2Digits[num2Last--] + 48);
        }
        
        reverse(bobResult.begin(), bobResult.end());
        ll RES = abs(stoll(bobResult)-correctResult);
        cout << RES << endl;
    }
}