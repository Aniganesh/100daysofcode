// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/karthik-and-the-robot-d7497742/
// 25-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        pair<int, int> pos = {1, 1};
        int numRows, numCols;
        cin >> numRows >> numCols;
        string path;
        cin >> path;
        bool unsafe = false;

        for(int row = 1; row <= numRows; ++row){
            for(int col = 1; col <= numCols; ++col){
                pos = {row,col};
                for(char i: path){
                    switch(i){
                        case 'L':
                            --pos.second;
                            break;
                        
                        case 'R':
                            ++pos.second;
                            break;
                        
                        case 'U':
                            ++pos.first;
                            break;
                        
                        case 'D':
                            --pos.first;                    
                            break;
                    }
                    if(pos.first <= 0 || pos.second <= 0 || pos.first > numRows || pos.second > numCols){
                        unsafe = true;
                        break;
                    }
                    unsafe = false;
                }
                if(!unsafe){
                    break;
                }
            }
            if(!unsafe){
                break;
            }
        }
        

        if(!unsafe){
            cout << "safe\n";
        }else{
            cout << "unsafe\n";
        }
    }
}