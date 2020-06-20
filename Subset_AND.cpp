// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subset-and-4/
// 20-06-2020 Very-easy/easy
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
        int num, sizeOfSet;
        cin >> num >> sizeOfSet;
        int temp;

        while(sizeOfSet--){
            cin >> temp;
            num &= temp;
        }

        cout << (num==0? "Yes\n" : "No\n");
    }

    return 0;
}