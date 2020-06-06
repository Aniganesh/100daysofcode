// https://www.hackerearth.com/problem/algorithm/a-easy-peasy/
// 06-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        string num1, num2;
        cin >> num1 >> num2;
        reverse(num1.begin(), num1.end()), reverse(num2.begin(), num2.end());

        cout << stoll(num1)+stoll(num2) << endl;
    }
}