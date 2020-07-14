// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/
// 14-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numQuestions, solvableDiff;
    cin >> numQuestions >> solvableDiff;
    int skipped = 0, questionsAnswered = 0, marks = 0;

    for(int i = 0; i < numQuestions; ++i){
        int quesDiff;
        cin >> quesDiff;
        
        if(quesDiff > solvableDiff){
            ++skipped;
        }else{
            ++questionsAnswered;
        }
        
        if(skipped > 1){
            questionsAnswered = 0;
        }

        marks = max(marks, questionsAnswered);
    }

    cout << marks;
    return 0;
}