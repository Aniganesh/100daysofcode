// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bob-and-bombs-cake-walk/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string bombsAndWalls;
        cin >> bombsAndWalls;
        int wallsDestroyed = 0;
        for(int i = 0; i < bombsAndWalls.length(); i++){
            if(i == 0 && bombsAndWalls[i]=='B'){
                if(bombsAndWalls[i+1] == 'W'){
                    wallsDestroyed++;
                    bombsAndWalls[i+1] ='0';
                }
                if(i+2 < bombsAndWalls.length())
                if(bombsAndWalls[i+2] == 'W'){
                    wallsDestroyed++;
                    bombsAndWalls[i+2] ='0';
                }
            }
            else if(bombsAndWalls[i]=='B'){
                if(i-2 > -1)
                if(bombsAndWalls[i-2] == 'W'){
                    wallsDestroyed++;
                    bombsAndWalls[i-2] = 0;
                }
                if(i-1 > -1)
                if(bombsAndWalls[i-1] == 'W'){
                    wallsDestroyed++;
                    bombsAndWalls[i-1] = 0;
                }
                if(i+1 < bombsAndWalls.length())
                if(bombsAndWalls[i+1] == 'W'){
                    wallsDestroyed++;
                    bombsAndWalls[i+1] ='0';
                }
                if(i+2 < bombsAndWalls.length())
                if(bombsAndWalls[i+2] == 'W'){
                    wallsDestroyed++;
                    bombsAndWalls[i+2] ='0';
                }
            }
        }
        cout << wallsDestroyed << endl;
    }
}