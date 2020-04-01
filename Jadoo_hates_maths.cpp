// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/golf/jadoo-hates-maths/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

bool contains(int num){
    while(num){
        if(num%10 == 3)
            return true;
        num /= 10;
    }
    return false;
}

int main(){
    int a;
    cin >> a;
    if(a < 40 && a > 29 || a < 140 && a > 129 || a < 240 && a > 229){
        cout << a+(40 - (a%100));
        return 0;
    }
    a++;
    while(a % 3==0 || contains(a)){
        a++;
    }
    cout << a;
}