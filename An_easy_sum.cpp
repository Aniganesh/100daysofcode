// https://www.hackerearth.com/problem/algorithm/an-easy-sum/
// 01-06-2020 - Very-easy/easy
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
        string testResult;
        cin >> testResult;
        int numCorrect = 0, score = 0;
        
        for(char i: testResult){
            if(i == '@')
                ++numCorrect;
            else
                numCorrect = 0;
            // cout << score << " " << numCorrect << endl;
            score += numCorrect;
            
        }

        cout << score << endl;
    }
}