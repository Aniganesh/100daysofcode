// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/equal-sum-5b547fc2/
// 17-07-2020 Very-easy/easy
#include<bits/stdc++.h>
using namespace std;

bool Check_Subarray (int N, vector<int> Arr, int K) {
   // Write your code here
    int hasharr[100005] = {0};
    
    for(int i = 0; i < N; ++i){
        ++hasharr[Arr[i]];
    }

    for(int i = 1; i <= 100000; ++i){
        if(hasharr[i]%(N/K) != 0){
            return false;
        }
    }

    return true;
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
        int K;
        cin >> K;
        vector<int> Arr(N);
        for(int i_Arr=0; i_Arr<N; i_Arr++)
        {
        	cin >> Arr[i_Arr];
        }
        bool out_;
        out_ = Check_Subarray(N,Arr, K);
        if(out_) cout<<"YES\n";
        else cout<<"NO\n";
    }
}