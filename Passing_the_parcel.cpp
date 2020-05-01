// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/passing-the-parcel/
// 19-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numStudents;
    cin >> numStudents;
    int numLeft = numStudents;
    bool inGame[numStudents];
    memset(inGame, true, sizeof inGame);
    string song;
    cin >> song;
    int len = song.length();
    int stuPointer = 0, lyricPointer = 0;
    while(numLeft > 1){
        if(song[lyricPointer]=='b'){
            inGame[stuPointer] = false;
            // cout << stuPointer+1 << " is out\n";
            stuPointer = (stuPointer + 1) % numStudents;
            lyricPointer = (lyricPointer + 1) % len;
            numLeft--;
        }else{
            lyricPointer = (lyricPointer + 1) % len;
            stuPointer = (stuPointer + 1) % numStudents;
        }
        while(inGame[stuPointer] == false){stuPointer = (stuPointer + 1) % numStudents;};
    }
    cout << stuPointer+1;
}