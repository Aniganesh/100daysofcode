// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/erase-to-max-7b8c0ca3/
// 20-05-2020 Medium
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

long long getResult (vector<long long> Arr) {
    // Write your code here
    unordered_map<ll, int> numFreq;
    ll sum = 0;
    for(int i = 0; i < Arr.size(); ++i){
        ++numFreq[Arr[i]];
        sum += Arr[i];
    }
    pair<ll, int> smallestProductPair = {INT_MAX, INT_MAX};
    for(pair<ll,int> i: numFreq){
        if((i.first*i.second) < (smallestProductPair.first*smallestProductPair.second)){
            smallestProductPair = i;
        }
    }
    return sum - smallestProductPair.first * smallestProductPair.second;
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
        vector<long long> Arr(N);
        for(int i_Arr=0; i_Arr<N; i_Arr++)
        {
        	cin >> Arr[i_Arr];
        }

        long long out_;
        out_ = getResult(Arr);
        cout << out_;
        cout << "\n";
    }
}