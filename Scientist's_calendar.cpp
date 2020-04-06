// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/scientists-calender/
// 06-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool isLeap(int year){
    if(year % 400 == 0|| (year % 4 == 0 && year % 100 !=0))
        return true;
    return false;
}

int main(){
    int currYear;
    cin >> currYear;
    int last2 = currYear % 100, last3 = currYear % 1000;
    int century = currYear-last2;
    if(!isLeap(century + 100)){
        if(last2 > 89){
            int add[] = {12, 12, 12, 6, 6, 6, 12, 12, 12, 6};
            cout << currYear+add[last2 % 10];
        }
        else if((last2 / 10 == 7 || last2 / 10 == 8) && isLeap(currYear)){
            cout << currYear + 40;
        }else{
            if(!isLeap(currYear)){
                if(currYear % 4 == 0 || currYear % 4 == 1){
                    cout << currYear + 6;
                }else{
                    cout << currYear + 11;
                }
            }else{
                cout << currYear + 28;
            }
        }
    }else{
        if(!isLeap(currYear)){
            if(currYear % 4 == 0 || currYear % 4 == 1){
                cout << currYear + 6;
            }else{
                cout << currYear + 11;
            }
        }else{
            cout << currYear + 28;
        }
    }
        
}

// help: https://www.quora.com/How-often-in-years-do-calendars-repeat-with-the-same-day-date-combinations?share=1