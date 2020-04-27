// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/flipping-the-string-831bbbbe/
// 27-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numChars;
    cin >> numChars;
    string binaryDigits;
    cin >> binaryDigits;
    int countZero[numChars+1] = {0}, countOne[numChars+1] = {0}, temp[numChars+1], mini[numChars+1];
    binaryDigits = " " + binaryDigits;
    for(int i = 1; i < numChars+1; i++){
        countZero[i] = countZero[i-1] + (binaryDigits[i] == '0');
        countOne[i] = countOne[i-1] + (binaryDigits[i] == '1');
        temp[i] = countZero[i] - countOne[i];
        mini[i] = min(mini[i-1], temp[i]);
    }
    
    int RES = 0;
    for(int i = 1; i < numChars+1; i++){
        int low = 0, high = i;
        while(low <= high){
            int mid = (low + high) / 2;
            if(mini[mid] < temp[i]){
                RES = max(RES, i-mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
    }
    cout << RES;
}