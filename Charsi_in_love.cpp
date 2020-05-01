// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/charsi-in-love/
// 28-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

/*
Let
X = a * (a+1) / 2
Y = b * (b+1) / 2
and
n = X + Y
Thus
Y = n - X

Y = n - (a * (a+1) / 2)
2Y = 2n - a * (a+1)

*/

int main(){
    ll numToSearch;
    cin >> numToSearch;
    for(int i = 1; i * (i+1) / 2 < 2 * numToSearch; i++){
        int t = numToSearch * 2 - i * (i+1);
        int k = sqrt(t);
        if(k * (k+1) == t){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}