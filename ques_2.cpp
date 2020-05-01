// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-2/
// 31-03-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < x || x > y){
            cout  << "NO";
            return 0;
        }
    }
    cout << "YES";
}