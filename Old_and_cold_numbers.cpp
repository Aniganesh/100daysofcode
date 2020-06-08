// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/old-and-cold-numbers-d9326e6b/
// 08-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    int old[int(5e4+2)];
    cin >> numTestcases;
    
    while(numTestcases--){
        int num, x;
        cin >> num;
        old[0] = 0;
        
        for(int i = 1; i <= num; ++i){
            cin >> x;
            old[i] = old[i-1] + ( (x == 1) || (!(x&1)));
        }
        
        int numQueries;
        cin >> numQueries;
        
        while(numQueries--){
            int left, right;
            cin >> left >> right;
            int total = old[right]-old[left-1];
            int rq = (right-left + 2)/2;
            cout << max(0, rq-total) << endl;
        }
    }
}