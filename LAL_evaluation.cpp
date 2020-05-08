// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/lal-evaluation/
// 08-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numStudents, luckyNum;
    cin >> numStudents >> luckyNum;
    int studentMarks[numStudents];
    for(int i = 0; i < numStudents; ++i){
        cin >> studentMarks[i];
    }
    int numPairs = 0;
    unordered_map<int, int> m;
    for(int i = 0; i < numStudents; ++i){
        m[studentMarks[i]]++;
    }
    for(int i = 0; i < numStudents; ++i){
        numPairs += m[luckyNum - studentMarks[i]];
        if(luckyNum-studentMarks[i] == studentMarks[i])
            numPairs--;
    }
    cout << numPairs / 2;
}