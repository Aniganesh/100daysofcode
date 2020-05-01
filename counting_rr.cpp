// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/counting-rr/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string input;
    cin >> input;
    int numRr = 0;
    for(int i = 0; i < input.length()-1; i++){
        if(input[i] == 'r'){
            if(input[i+1] == 'r'){
                numRr++;
            }
        }
    }
    cout << numRr;
}