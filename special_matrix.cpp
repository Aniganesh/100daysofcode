// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/special-matrix-1/
// 07-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
    int numtests;
    cin >> numtests;
    while(numtests--){
        char ch;
        int size, RES;
        cin >> size;
        for(int i = 0; i < size; i++){
            for(int j =  0; j < size; j++){
                cin >> ch;
                if(ch == '*'){
                    RES = abs(size / 2 - i);
                    RES += abs(size / 2 - j);
                }
            }
        }
        cout << RES << endl;
    }
}