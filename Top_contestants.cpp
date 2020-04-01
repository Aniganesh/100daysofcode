// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/epiphany-coming-soon-43c4af4b/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>
using namespace std;

vector<int> Find_K (int K, vector<int> Score, int N) {
   // Write your code here
   vector<int> RES, sortedScore(Score.begin(), Score.end());
   sort(sortedScore.begin(), sortedScore.end(), greater<int>());
   for(int i = 0; i < K; i++){
      auto index = find(Score.begin(), Score.end(), sortedScore[i]);
      RES.push_back((int)((index-Score.begin())+1));
   }
   return RES;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int K;
    cin >> K;
    vector<int> Score(N);
    for(int i_Score=0; i_Score<N; i_Score++)
    {
    	cin >> Score[i_Score];
    }

    vector<int> out_;
    out_ = Find_K(K, Score, N);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}