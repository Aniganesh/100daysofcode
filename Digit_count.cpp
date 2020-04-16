// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/highest-number/
// 16-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string givenNum;
    cin >> givenNum;
    int numFrequency[int(5e5+5)][10];
    for(int i = 1; i <= givenNum.length(); i++){
        for(int j = 0; j < 10; j++){
            numFrequency[i][j] = numFrequency[i-1][j];
        }
        numFrequency[i][givenNum[i-1]-48]++;
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int left, right;
        cin >> left >> right;
        int maxDigit = -1, maxFrequency = 0;
        for(int i = 9; i >= 0; i--){
            int freq = numFrequency[right][i]-numFrequency[left-1][i];
            if(freq > maxFrequency){
                maxDigit = i;
                maxFrequency = freq;
            }
        }
        cout << maxDigit << " " << maxFrequency << endl;
    }

}