// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/room-allotment/
// 15-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int mindistance(string str, int a){
    if(a == 1)  return 0;
    int minRes = INT_MAX;
    queue<int> officeSpace;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1')
            continue;
        if(officeSpace.size() == a-1){
            minRes = min(minRes, i-officeSpace.front());
        }
        officeSpace.push(i);
        while(officeSpace.size() > a-1){
            officeSpace.pop();
        }
    }
    return minRes;
}

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        string input;
        int numNewEmp;
        cin >> input >> numNewEmp;
        numNewEmp = (numNewEmp + 1) / 2;
        cout << mindistance(input, numNewEmp) << endl;
    }
}