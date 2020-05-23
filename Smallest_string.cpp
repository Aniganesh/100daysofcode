// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/smallest-string-1-ab268aff/
// 23-05-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int stringLen;
        cin >> stringLen;
        string input;
        cin >> input;
        string RES = input;

        for(int i = 0; i < stringLen; ++i){
            for(int j = 0; j < stringLen; ++j){
                string inpCpy = input;
                inpCpy.erase(j, 1);
                inpCpy.insert(i, 1, input[j]);
                RES = min(RES, inpCpy);
            }
        }
        cout << RES << endl;
    }
}