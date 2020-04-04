// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/0000000000209a9f
// 04-04-2020 Medium

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for(int i_test = 1; i_test <= testcases; i_test++){
        string digitString, RES;
        cin >> digitString;
        int currentDepth = 0;
        int len = digitString.length()-1;
        
        for(int i_str = 0; i_str < digitString.length()-1; i_str++){
            for(; currentDepth < (digitString[i_str]-48); currentDepth++){
                RES.push_back('(');
            }

            RES.push_back(digitString[i_str]);
    
            while(currentDepth > digitString[i_str + 1] - 48){
                RES.push_back(')');
                currentDepth--;
            }
            
        }
        
        for(; currentDepth < (digitString[len] - 48); currentDepth++){
            RES.push_back('(');
        }
        
        RES.push_back(digitString[len]);
        
        while(currentDepth--){
            RES.push_back(')');
        }
        
        cout <<"Case #" << i_test << ": " << RES << endl;
    }
}
