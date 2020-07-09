// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/techfest-and-group-photo-06dfebc0/
// 09-07-2020 Very-easy/easy
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<ll> solve (vector<vector<int> > dim) {
   // Write your code here
   ll sum_of_widths = 0;
   vector<int> heights;
   for(vector<int> i: dim){
      sum_of_widths += i[0];
      heights.push_back(i[1]);
   }
   
   vector<ll> RES(dim.size(), sum_of_widths);
   sort(heights.begin(), heights.end(), greater<int>());
   
   if(dim.size() == 1){
      RES[0] = 0;
      return RES;
   }
   for(int i = 0; i < dim.size(); ++i){
      RES[i] -= dim[i][0];
      RES[i] *= (dim[i][1] == heights[0]? heights[1]: heights[0]);
   }

   return RES;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int> > dim(n, vector<int>(2));
    for (int i_dim=0; i_dim<n; i_dim++)
    {
    	for(int j_dim=0; j_dim<2; j_dim++)
    	{
    		cin >> dim[i_dim][j_dim];
    	}
    }

    vector<ll> out_;
    out_ = solve(dim);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}