// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/swapping-string-4/
// 10-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        string RES = "";
        int len;
        cin >> len;
        string given; 
        cin >> given;
        
        for(auto it = given.begin()+1; it < given.end(); it += 2){
            RES += *it;
        }
        

        if(given.length() & 1){
            for(auto it = given.rbegin(); it < given.rend(); it += 2){
                RES += *it;
            }
        }else{
            for(auto it  = given.rbegin()+1; it < given.rend(); it += 2){
                RES += *it;
            }
        }

        cout << RES << endl;
    }
}