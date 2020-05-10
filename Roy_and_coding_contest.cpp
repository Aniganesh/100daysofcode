// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-coding-contest/
// 10-05-2020 Very-easy/easy
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t , n, m , ans = 0, st, con = 0;
    bool found = false;
    cin >> t;
    while(t--){
        cin >> n >> m;
        st = 1, con = 0, ans = 1;
        found = false;
        if(n == 1){                 // special case
            cout << "0\n";
            continue;
        }
        while(1){
            ans += (st /2);     
            con++;
            if(st > m){             // no more pendrives
                found = true;
                break;
            }
            st *= 2;                // double the number of pendrives
            if(ans >= n) break;     // check if all computers has the PDF
        }
        if(!found || ans >= n) cout << con << "\n";                             // all computers has the PDF
        else cout << con + (n - ans) / m +  (((n - ans) % m) != 0) << "\n";     // the remainning time
    }
    return 0;
}