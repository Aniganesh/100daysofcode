// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/special-shop-69904c91/
// 22-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    ll testcases;
    cin >> testcases;
    while(testcases--){
        ll num, costTypeOne, costTypeTwo;
        cin >> num >> costTypeOne >> costTypeTwo;
        /*
        * The question states can be resolved to an algebraic eqn.
        * f(x,y) = ax^2 + by^2 => g(x) = ax^2 + b(n-x)^2 [Since y = n - x]
        * g(x) = ax^2 + bn^2 - 2bnx + bx^2 => (a+b)x^2 - 2bnx + bn^2;
        * g(x) = (a+b)(x- (bn / a + b))^2
        * calculate (bn / a + b) = x since the roots of x is + or - (bn / a + b)
        * We can't have negative roots for this problem.
        * Since x needs to be an integral value and not a fraction, use round for calculating
        * (bn / a + b)
        * y = n - x;
        */
        ll numTypeOne = round((long double)num * costTypeTwo/(costTypeOne + costTypeTwo));
        ll numTypeTwo = num - numTypeOne;
        cout << (ll) costTypeOne * numTypeOne * numTypeOne + costTypeTwo * numTypeTwo * numTypeTwo << endl;
    }
}