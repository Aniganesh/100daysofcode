// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/arithmetic-progression-1-81131fa7/
// 11-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        long a, b, c;
        cin >> a >> b >> c;
        cout << (abs(2*b - (a+c)) + 1) / 2 << endl;
    }

}