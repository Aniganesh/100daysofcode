// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/bit-flippings-dd1f7ef1/
// 15-06-2020 Very-easy/easy
#include<bits/stdc++.h>
using namespace std;
int last_move = 0;
char solve (vector<string>& Number) {
   // Return character A from this function if player A is winner. Return
   // character B from this function if player B is winner. Also set the
   // value of global variable last_move to the last move number of the
   // player who is winner in the game
   
   int maxLen = 0;
   for(string str: Number){
      maxLen = max(maxLen, (int)str.length());
   }

   string resString(maxLen, '0');
   
   for(int i = 0; i < Number.size(); ++i){
      for(int j = 0; j < Number[i].length(); ++j){
         resString[j] = ((Number[i][j]-48 == 1)? '1' : resString[j]);
      }
   }

   int numOnes = 0;

   for(char i: resString){
      numOnes+= (i=='1');
   }
   if(numOnes & 1){
      last_move = numOnes;
      return 'A';
   }

   last_move = numOnes;
   return 'B';
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<string> Number(N);
    for(int i_Number=0; i_Number<N; i_Number++)
    {
    	cin >> Number[i_Number];
    }

    char out_;
    out_ = solve(Number);
    cout << out_ << endl;
    cout << last_move << endl;

}