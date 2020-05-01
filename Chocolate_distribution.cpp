// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/chocolate-distribution-709f61ec/
// 03-04-2020 Very-easy/easy

#include<bits/stdc++.h>
using namespace std;

long long solution (vector<int> chocolates, int M, int N) {
    // Find the maximum number of chocolates that can be selected.
    long long sum = 0, last_modulo[100005], RES = 0;
    memset(last_modulo, -1, sizeof(last_modulo));
    last_modulo[0] = 0;
    for(int i = 0; i < N; i++){
        sum += chocolates[i];
        int tmp = sum % M;
        if(last_modulo[tmp] == -1){
            last_modulo[tmp] = sum;
        }else{
            RES = max(RES, sum - last_modulo[tmp]);
        }
    }
    return RES/M;
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
        int M;
        cin >> M;
        vector<int> chocolates(N);
        for(int i_chocolates=0; i_chocolates<N; i_chocolates++)
        {
        	cin >> chocolates[i_chocolates];
        }

        long long out_;
        out_ = solution(chocolates, M, N);
        cout << out_;
        cout << "\n";
    }
}