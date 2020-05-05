// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/help-jarvis-8a39566e/#c226624
// 05-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    string coachNum;
    while(numTestcases--){
        cin >> coachNum;
        sort(coachNum.begin(), coachNum.end());
        bool answered = false;
        for(int i = 0; i < coachNum.size()-1; i++){
            if(coachNum[i+1]-coachNum[i] != 1){
                cout << "NO\n";
                answered = true;
                break;
            }
        }
        if(!answered)
            cout << "YES\n";
    }
}