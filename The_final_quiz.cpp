// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-bet-1-dbc1acde/
// 17-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 100000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int myScore, aliceScore, bobScore;
        cin >> myScore >>  aliceScore >> bobScore;
        int aliceGuess, bobGuess;
        int prevMaxScore = -1, RES = 1234567;
        cin >> aliceGuess >> bobGuess;
        for(int i = 0; i <= myScore; i++){
            int myScoreIfWin = myScore + i, aScoreIfWin = aliceScore + aliceGuess;
            int bScoreIfWin = bobScore + bobGuess;
            int myScoreIfLose = myScore - i, aScoreIfLose = aliceScore - aliceGuess;
            int bScoreIfLose = bobScore - bobGuess;
            int myMaxScore = 0;
            if(myScoreIfLose > bScoreIfLose && myScoreIfLose > aScoreIfLose) myMaxScore++;
            if(myScoreIfLose > aScoreIfLose && myScoreIfLose > bScoreIfWin) myMaxScore++;
            if(myScoreIfLose > aScoreIfWin && myScoreIfLose > bScoreIfLose) myMaxScore++;
            if(myScoreIfWin > aScoreIfLose && myScoreIfWin > bScoreIfLose) myMaxScore++;
            if(myScoreIfWin > aScoreIfLose && myScoreIfWin > bScoreIfLose) myMaxScore++;
            if(myScoreIfWin > aScoreIfLose && myScoreIfWin > bScoreIfWin) myMaxScore++;
            if(myScoreIfWin > aScoreIfWin && myScoreIfWin > bScoreIfLose) myMaxScore++;
            if(myScoreIfWin > aScoreIfWin && myScoreIfWin > bScoreIfWin) myMaxScore++;
            if(myMaxScore > prevMaxScore){
                prevMaxScore = myMaxScore;
                RES = i;
            }
        }
        cout << RES << endl;
    }
}