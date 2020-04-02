// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/heman-anil-and-soubhik/
// 02-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases, num;
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    cin >> testcases;
    
    while(testcases--){
        int RESULT = 0;
        cin >> num;
        for(int i = num; i >= 1; i--){
            if((i & (i-1)) == 0){
                RESULT = i;
                break;
            }
        }
        if(RESULT == num)
            cout << RESULT   << endl;
        else
            cout << (2*(num-RESULT)) << endl;
    }
}