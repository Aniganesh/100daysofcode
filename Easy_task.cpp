// https://www.hackerearth.com/problem/algorithm/easy-task-16/
// 06-06-2020 Very-easy/easy
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
        string input;
        cin >> input;
        int RES = 0;
        
        for(char i: input){
            if(i == 'r'){
                --RES;
            }else if(i == 'm'){
                ++RES;
            }
        }

        cout << abs(RES) << endl;
    }
}