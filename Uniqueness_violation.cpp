// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/uniqueness-violation-b78b51ee/
// 09-06-2020 - Very-easy/easy
#include<bits/stdc++.h>
using namespace std;

int solve (vector<int>& arrayVals, vector<int>& uniquenessValue) {
    // Write your code here
    int RES = 0;
    
    for(int i = 0; i < arrayVals.size();){
        int currentMaxVal = arrayVals[i];
        int j;

        for(j = i+1; j < uniquenessValue.size(); ++j){
            if(uniquenessValue[i] == uniquenessValue[j])
                currentMaxVal = max(currentMaxVal, arrayVals[j]);
            else
                break;
        }
        i = j;
        RES += currentMaxVal;
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
        vector<int> U(N);
        for(int i_U=0; i_U<N; i_U++)
        {
        	cin >> U[i_U];
        }
        vector<int> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A, U);
        cout << out_;
        cout << "\n";
    }
}