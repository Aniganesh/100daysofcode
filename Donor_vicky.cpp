// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/donar-tds/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n,x, poorNo = 1, given = 1;
        cin >> n >> x;
        while(1){
            x -= given;
            if(x <= 0){
                cout << poorNo << endl;break;
            }
            poorNo++;
            given++;
            if(poorNo > n && x > 0)
                poorNo = 1;
        }
    }
}