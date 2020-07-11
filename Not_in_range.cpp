// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/not-in-range-44d19403/
// 11-07-2020 Very-easy/easy
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int numRanges;
   cin >> numRanges;
   ll a[int(1e6) + 5] = {0};
   
   while(numRanges--){
      ll start, end;
      cin >> start >> end;
      a[start] += 1;
      a[end+1] -= 1;
   }

   for(int i = 2; i <= 1e6; ++i){
      a[i] += a[i-1];
   }
   
   ll x = 0;
   
   for(ll i = 1; i <= 1e6; ++i){
      if(a[i] == 0){
         x += i;
      }
   }
   
   cout << x << endl;
   
   return 0;
}