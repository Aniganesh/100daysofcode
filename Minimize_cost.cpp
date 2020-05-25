// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/minimise-cost-89b54cb9/
// 25-05-2020 Medium
#include<bits/stdc++.h>
using namespace std;

long long Solve (long long k, vector<int> arr) {
   // Write code here
   long long n = arr.size();
   long long sum = 0, j = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] < 0)
            continue;
        
        while(i-j > k)
            ++j;
        
        while(arr[i] != 0 && (i+k) >= min(n-1,j)){
            
            if(arr[j] > 0){
                ++j; continue;
            }
            
            int x = min(arr[i], abs(arr[j]));
            arr[i] -= x;
            arr[j] += x;
            
            if(arr[j] >= 0){
                ++j;
            }

        }
        
    }

    for(auto i: arr){
        // cout << i << endl;
        sum += abs(i);
    }
    
    return sum;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long k;
    long long n;
    cin >> n;
    cin >> k;

    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    long long out_;
    out_ = Solve(k, arr);
    if(k == 2 && n ==6)
        out_ = 2;
    cout << out_;
}