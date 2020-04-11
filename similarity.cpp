// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/similarity/#c221845
// 11-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int alphaFrequency1[128] = {0}, alphaFrequency2[128] = {0};
        string input1, input2;
        cin >> input1 >> input2;
        for(char i: input1){
            alphaFrequency1[i]++;
        }
        for(char i: input2){
            alphaFrequency2[i]++;
        }
        int diff = 0;
        for(int i = 0; i < 128; i++){
            diff += abs(alphaFrequency1[i]-alphaFrequency2[i]);
        }
        cout << diff << endl;
    }
}