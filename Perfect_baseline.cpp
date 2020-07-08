// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/perfect-baseline/
// 08-07-2020 Very-easy/easy
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
        int numStrings, numChars;
        cin >> numStrings >> numChars;
        vector<string> allCharsAtPos(numChars, "");

        for(int i = 0 ; i < numStrings; ++i){
            string temp;
            cin >> temp;

            for(int i = 0; i < numChars; ++i){
                allCharsAtPos[i] += temp[i];
            }

        }

        string RES = "";
        
        for(int i = 0; i < numChars; ++i){
            sort(allCharsAtPos[i].begin(), allCharsAtPos[i].end());
            RES += allCharsAtPos[i][(numStrings-1)/2];
        }

        cout << RES << endl;
    }
}