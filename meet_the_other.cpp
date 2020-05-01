// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/meet-the-other/
// 07-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long numStrings, diff = LONG_MAX;
        cin >> numStrings;
        map<string, int> mainMap;
        for(int i = 1; i <= numStrings; i++){
            string currStr;
            cin >> currStr;
            if(mainMap[currStr]){
                diff = min(diff, abs((long)mainMap[currStr]-i));
                mainMap[currStr] = i;
            }else{
                mainMap[currStr] = i;
            }
        }
        if(diff == LONG_MAX)
            cout << -1 << endl;
        else
            cout << diff << endl;
    }
}