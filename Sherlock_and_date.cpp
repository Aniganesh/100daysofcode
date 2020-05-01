// https://www.hackerearth.com/practice/basic-a/implementation/basics-of-implementation/practice-problems/algorithm/sherlock-and-date/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;
bool isLeap(int year){
    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        return true;
    return false;
}
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int date, year;
        string month;
        cin >> date >> month >> year;
        if(date == 1){
            if(month == "January")
                month = "December", year--, date = 31;
            else if(month == "February")
                month = "January", date = 31;
            else if(month == "March")
                if(isLeap(year))
                    month = "February", date = 29;
                else
                    month = "February",  date = 28;
            else if(month == "April")
                month = "March", date = 31;
            else if(month == "May")
                month = "April", date = 30;
            else if(month == "June")
                month = "May", date = 31;
            else if(month == "July")
                month = "June", date = 30;
            else if(month == "August")
                month = "July", date = 31;
            else if(month == "September")
                month = "August", date = 31;
            else if(month == "October")
                month = "September", date = 30;
            else if(month == "November")
                month = "October", date = 31;
            else if(month == "December")
                month = "November", date = 30;
        }else{
            date--; 
        }
        cout << date << " " + month + " " << year << endl;
    }
}