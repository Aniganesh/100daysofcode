// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/greatest-string-fcf3e37c/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases, maxOps;
    cin >> testcases;
    string inputString;
    while(testcases--){
        cin >> inputString >> maxOps;
        for(int i = 0; i < inputString.length() && maxOps > 0; i++)
            if(inputString[i] == 'a' || inputString[i] == 'e'|| inputString[i] == 'i'|| inputString[i] == 'o'|| inputString[i] == 'u'){
                inputString[i]++;maxOps--;}
        cout << inputString << endl;
    } 
}