// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sherlock-and-dates/
// 13-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

bool isLeap(int year){
    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        return true;
    return false;
}

int countSpl(int dd, int mm, int yyyy){
    if(yyyy == 0)
        return 0;
    int x = yyyy/100;

    int res = max(x, 0) * 11;
    
    res += max(0, min(13,(yyyy%100)-1)-2);
    if(mm > yyyy % 100 - 1 && yyyy % 100 >= 3 ) res++;
    else if(mm == yyyy % 100 - 1 && dd >= yyyy % 100 - 2 && yyyy % 100 > 2)res++;
    return res;
}
int daysInMonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int testcases;
    cin >> testcases;
// There are only 11 combinations for the lucky dates: 1-2-3, 2-3-4, 3-4-5, 4-5-6, 5-6-7, 6-7-8, 7-8-9, 8-9-10, 9-10-11, 10-11-12, 11-12-13
    while(testcases--){
        int d1, d2, m1, m2, y1, y2;
        scanf("%d:%d:%d %d:%d:%d", &d1,&m1,&y1, &d2, &m2, &y2);
        
        if(d1 == 1){
            if(m1 == 1){
                y1--;
                m1 = 12;
                d1 = 31;
            }
            else{
                m1--;
                if(m1 == 2){
                    if(isLeap(y1))
                        d1 = 29;
                    else{
                        d1 = daysInMonth[m1];
                    }
                }else{
                        d1 = daysInMonth[m1];
                    }
            }
        }else{
            d1--;
        }
            
        cout << countSpl(d2, m2, y2) - countSpl(d1,m1,y1) << endl;
        
    }
}