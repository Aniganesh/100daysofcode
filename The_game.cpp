// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-game-1-8cb01c18/
// 04-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numNumbers, rioLucky, tokyoLucky, rioNums = 0, tokyoNums = 0, currNum;
        cin >> numNumbers >> rioLucky >> tokyoLucky;
        for(int i = 0; i < numNumbers; i++){
            cin >> currNum;
            if(currNum != 0){
                if(currNum % rioLucky == 0)
                    rioNums++;
                else if(currNum % tokyoLucky == 0)
                    tokyoNums++;
            }
        }
        if(tokyoNums >= rioNums)
            cout << "Tokyo\n";
        else
            cout << "Rio\n";
    }
}