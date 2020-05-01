// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-texting-robot-2/
// 16-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    map<char, int> aktaps;
    aktaps['.'] = 1;
    aktaps[','] = 2;
    aktaps['?'] = 3;
    aktaps['!'] = 4;
    aktaps['a'] = 1;
    aktaps['b'] = 2;
    aktaps['c'] = 3;
    aktaps['d'] = 1;
    aktaps['e'] = 2;
    aktaps['f'] = 3;
    aktaps['g'] = 1;
    aktaps['h'] = 2;
    aktaps['i'] = 3;
    aktaps['j'] = 1;
    aktaps['k'] = 2;
    aktaps['l'] = 3;
    aktaps['m'] = 1;
    aktaps['n'] = 2;
    aktaps['o'] = 3;
    aktaps['p'] = 1;
    aktaps['q'] = 2;
    aktaps['r'] = 3;
    aktaps['s'] = 4;
    aktaps['t'] = 1;
    aktaps['u'] = 2;
    aktaps['v'] = 3;
    aktaps['w'] = 1;
    aktaps['x'] = 2;
    aktaps['y'] = 3;
    aktaps['z'] = 4;
    aktaps['0'] = 2;
    aktaps['_'] = 1;
    for(char i = '2'; i < 59;i++)
        aktaps[i] = 4;
    aktaps['7']++;
    aktaps['9']++;
    aktaps['1'] = 5;
    map<char, int> alphakey;
    alphakey['.'] = 1;
    alphakey[','] = 1;
    alphakey['?'] = 1;
    alphakey['!'] = 1;
    alphakey['1'] = 1;
    alphakey['a'] = 2;
    alphakey['b'] = 2;
    alphakey['c'] = 2;
    alphakey['2'] = 2;
    alphakey['d'] = 3;
    alphakey['e'] = 3;
    alphakey['f'] = 3;
    alphakey['3'] = 3;
    alphakey['g'] = 4;
    alphakey['h'] = 4;
    alphakey['i'] = 4;
    alphakey['4'] = 4;
    alphakey['j'] = 5;
    alphakey['k'] = 5;
    alphakey['l'] = 5;
    alphakey['5'] = 5;
    alphakey['m'] = 6;
    alphakey['n'] = 6;
    alphakey['o'] = 6;
    alphakey['6'] = 6;
    alphakey['p'] = 7;
    alphakey['q'] = 7;
    alphakey['r'] = 7;
    alphakey['s'] = 7;
    alphakey['7'] = 7;
    alphakey['t'] = 8;
    alphakey['u'] = 8;
    alphakey['v'] = 8;
    alphakey['8'] = 8;
    alphakey['w'] = 9;
    alphakey['x'] = 9;
    alphakey['y'] = 9;
    alphakey['z'] = 9;
    alphakey['9'] = 9;
    alphakey['0'] = 0;
    alphakey['_'] = 0;
    int testcases;
    cin >> testcases;
   
    while(testcases--){
        int currPosition = 1, totalTime = 0;
        string input;
        cin >> input;
        for(int i = 0; i < input.length(); i++){
            int newPos = alphakey[input[i]];
            if(newPos != currPosition){
                totalTime++;
                currPosition = newPos;
            }
            totalTime += aktaps[input[i]];
        }
        
        cout << totalTime << endl;
    }
    
}
