// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/a-tricky-addition/
// 03-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string num1, num2, RES;
        int carry = 0, temp, lastSum = 0;
        cin >> num1 >> num2;
        int i = 0;
        int j = 0;
        bool flag = false;
        int cond = min(num1.length()-1, num2.length()-1);
        if(num1.length() == num2.length())
            flag = true;
        while(cond > -1){
            temp = carry + (num1[i] - 48) + (num2[j] - 48);
            i++; j++; 
            // cout << temp << " " << temp % 10 << endl;
            // cout << carry << " + ";
            if(temp >= 10){
                lastSum = temp;
                carry = (temp % 10);
                temp /= 10;
            }else{
                lastSum = 0;
                carry = 0;
            }
            // cout << num1[i-1] << " + " << num2[j-1] << " = " << temp << " (" << carry <<")" << endl;
            RES.push_back(temp+48);
            cond--;
        }
        while(i < num1.length()){
            temp = carry + (num1[i] - 48);
            i++;
            if(temp >= 10){
                lastSum = temp;
                carry = temp % 10;
                temp /= 10;
            }else{
                lastSum = 0;
                carry = 0;
            }
            RES.push_back(temp+48);
        }
        while(j < num2.length()){
            temp = carry + (num2[j] - 48);
            j++;
            if(temp >= 10){
                lastSum = temp;
                carry = temp % 10;
                temp /= 10;
            }else{
                lastSum = 0;
                carry = 0;
            }
            RES.push_back(temp+48);
        }
        if((flag && carry > 0) || lastSum >= 10){
            RES.push_back(carry+48);
        }
        carry = 0;
        cout << RES << endl;
        RES.clear();
    }
}