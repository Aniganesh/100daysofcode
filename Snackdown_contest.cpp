// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/snackdown-contest/
// 14-07-2020 Very-easy/easy
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
        int numQuestions;
        cin >> numQuestions;
        vector<bool> solvable(numQuestions, false);
        
        int ISolve, heSolves, qnNo;
        cin >> ISolve;

        while(ISolve--){
            cin >> qnNo;
            solvable[qnNo-1] = true;
        }

        cin >> heSolves;

        while(heSolves--){
            cin >> qnNo;
            solvable[qnNo-1] = true;
        }

        if(accumulate(solvable.begin(), solvable.end(), 0) == numQuestions){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }

    }

    return 0;
}