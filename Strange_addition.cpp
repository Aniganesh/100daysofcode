// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-reversed-numbers/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases,temp, carry = 0;
    string num1, num2, RES;
    cin >> testcases;
    while(testcases--){
        cin >> num1 >> num2;
        carry = 0;
        int i = 0;
        int j = 0;
        int cond = min(num1.length(), num2.length());
        while(cond--){
            temp = carry + (num1[i] - 48) + (num2[j] - 48);
            carry = temp/10;
            i++; j++;
            temp %= 10;
            RES.push_back(temp + 48);
        }
        while(i < num1.length()){
            temp = carry + num1[i] - 48;
            carry = temp / 10;
            temp %= 10;
            RES.push_back(temp + 48);
            i++;
        }
        while(j < num2.length()){
            temp = carry + num2[j] - 48;
            carry = temp / 10;
            temp %= 10;
            RES.push_back(temp + 48);
            j++;
        }
        if(carry > 0)
            RES.push_back(carry+48);
        cout << stoi(RES) << endl;
        RES.clear();
    }
}