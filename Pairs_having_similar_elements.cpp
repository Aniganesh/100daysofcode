// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pairs-having-similar-element-eed098aa/
// 11-07-2020 Very-easy/easy
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

long long SimilarElementsPairs (vector<int> A,int N) {
   // Write your code here
   sort(A.begin(), A.end());
   ll RES = 0, ct = 1, ctdis = 1;

   for(int i = 1; i < N; ++i){
      if(A[i] == A[i-1]){
         ++ct;
      }
      else if(A[i] == A[i-1]+1){
         ++ct;
         ++ctdis;
      }else{
         if(ct >= 2 && ctdis >= 2){
            RES += (ct*(ct-1))/2;
         }
         ct = 1;
         ctdis = 1;
      }

   }
   
   if(ct >= 2 && ctdis >= 2){
      RES += (ct*(ct-1))/2;
   }
   
   return RES;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}