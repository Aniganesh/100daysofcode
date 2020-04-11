// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/what-is-the-string-made-of-2/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string input;
    cin >> input;
    int numDashes[]={6,2,5,5,4,5,6,3,7,6};
    long totalDashes = 0;
    for(char i: input){
        totalDashes += numDashes[i-48];
    }
    cout << totalDashes;
}