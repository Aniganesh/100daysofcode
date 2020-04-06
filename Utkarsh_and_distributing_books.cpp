// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/utkarsh-and-distributing-books-february-easy/
// 06-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
   int testcases;
   cin >> testcases;
   while(testcases--){
       int numPiles;
       cin >> numPiles;
       vector<int> numBooksinPile(numPiles);
       for(int i = 0; i < numPiles; i++){
           cin >> numBooksinPile[i];
       }
       int utkarsh = *(min_element(numBooksinPile.begin(), numBooksinPile.end())) - 1;
       int saharsh = numPiles;
       for(int i = 0; i < numPiles; i++){
           saharsh += numBooksinPile[i] - 2;
       }
       cout << utkarsh << " " << saharsh << endl;
   }
}