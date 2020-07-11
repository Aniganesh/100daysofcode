// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charged-up-array-f35a5e23/
// 11-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

ll solve (vector<long long> A) {
   // Write your code here
    if(A.size() >= 64){
        return 0;
    }
    ll val = (1ll << (A.size()-1)), RES = 0;
    for(int i = 0; i < A.size(); ++i){
        if(A[i] >= val){
            RES = (RES+ A[i]MOD)MOD;
        }
    }
    return RES;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}