// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sherlock-and-special-count/
// 22-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    

    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int num, specialSum;
        cin >> num >> specialSum;
        
        if(specialSum & 1 || specialSum > (num * num/2))
            cout << "NO\n";
        else
            cout << "YES\n";

    }

    return 0;
}
