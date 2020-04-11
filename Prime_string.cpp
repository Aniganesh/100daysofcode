// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/prime-string-598/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numtestcases;
    cin >> numtestcases;
    while(numtestcases--){
        string inputString;
        cin >> inputString;
        for(int i = 0; i < inputString.length();i++){
            if(inputString[i]<100)
                inputString[i]=97;
            else if(inputString[i]<103)
                inputString[i]=101;
            else if(inputString[i]<106)
                inputString[i]=103;
            else if(inputString[i]<109)
                inputString[i]=107;
            else if(inputString[i]<112)
                inputString[i]=109;
            else
                inputString[i]=113;
        }
        cout << inputString << endl;
    }
}