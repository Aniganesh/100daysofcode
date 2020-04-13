// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-wring-number-in-series/
// 13-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements;
        cin >> numElements;
        int values[numElements+1];
        for(int i = 1; i <= numElements; i++){
            cin >> values[i];
        }
        int val1, val2;
        bool breakFlag = false;
    
        for(int u = 1; u <= 4; u++){
            for(int v = 1; v <= 4; v++){
                int numMatched = 0;
                for(int i = 1; i <= numElements; i++){
                    if(pow(i,v)-pow(i,u) == values[i]){
                        numMatched++;
                    }
                    if(numMatched > 4){
                        val1 = v;
                        val2 = u;
                        breakFlag = true;
                        break;
                    }

                }
            }
            if(breakFlag){
                break;
            }
        }
    
        bool flag = false;
        int incorrect;
        for(int i = 1; i <= numElements; i++){
            if(pow(i,val1) - pow(i,val2) != values[i])
            {
                flag = true;
                incorrect = i;
                break;
            }
        }
        if(flag){
            cout << "Incorrect " << values[incorrect] << endl;
        }
        else
            cout << "Correct" << endl;
    }
    
}