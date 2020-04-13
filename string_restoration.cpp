// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-restoration-ather-b41289af/
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
        int reps[numElements];
        for(int i = 0; i < numElements; i++){
            cin >> reps[i];
        }
        string base = "a";
        char nextChar = 'a', minimum = 'a';
        bool oops = false;
        if(reps[0] != 1){
            cout << "-1" << endl;
            continue;
        }
        for(int i = 1; i < numElements; i++){
            if(reps[i]==reps[i-1]){
                base += minimum;
            }else
            if(reps[i] == reps[i-1]+1){
                nextChar++;
                base += nextChar;
            }else if(reps[i] > reps[i-1]+1 || reps[i] > 26){
                cout << "-1" << endl;
                oops = true;
                break;
            }
            if(i < numElements-1){
                if(reps[i] > reps[i+1]){
                   cout << "-1" << endl;
                    oops = true;
                    break; 
                }
            }
        }
        if(oops)
            continue;
        cout << base << endl;
    }
}