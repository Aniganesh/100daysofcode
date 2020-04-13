// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/new-game-of-oz/
// 13-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int getans(vector<int> &res){
  int ans = 0;                                
  sort(res.begin(), res.end());
  int size = 0;                           
  for(int i = 0; i < res.size(); i++){
    int ff = 0;                                                             
    if(i == 0 || res[i] == res[i-1] + 1)size++;
    else {
      ff = size;                           
      size = 1;
    }
    ans += (ff+1)/2;
    if(i == res.size()-1)ans += (size+1)/2;                     
  }
  return ans;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements;
        cin >> numElements;
        vector<int> elements(numElements);
        
        for(int i = 0; i < numElements; i++)
            cin >> elements[i];
        sort(elements.begin(), elements.end());
        cout << getans(elements) << endl;
    }
}