// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/distribution-1-3800e537/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int n;
    cin >> n;
    int res;
    for(int i = 0; i < n; i++){ // Prashanth's gifts
        for(int j = i+1; j < n; j++){ // Ankit's gifts
            for(int k = j+1; k < n; k++) // Manish's gifts
                if(i+j+k == n)
                    res++;
        }
    }
    cout << res;
}

// Note: There is an O(n) solution for this problem. Check out later!