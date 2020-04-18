// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/gupta-chaturvedi-and-saxena-trilogy-a/
// 18-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    // nth term of Arithmetic progression => a + (n-1)d
    /*
    * a +  4d = 178
    * a + 16d = 646
    * 0 + -12d = -468
    * d = 468 / 12
    * a = 178 - 4d
    */
    int diff_between_terms = 468/12;
    int first_term = 178 - 4 * diff_between_terms;
    cout << first_term + 930 * diff_between_terms;
}