// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/2-arrays-90c9019c/
// 08-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues, value, numNegativesFirstArray = 0, numNegativesSecondArray = 0;
    cin >> numValues;
    int firstArraySum = 0, secondArraySum = 0;
    for(int i = 0; i < numValues; ++i){
        cin >> value;
        if(value != -1)
            firstArraySum += value;
        else
            ++numNegativesFirstArray;
    }
    for(int i = 0; i < numValues; ++i){
        cin >> value;
        if(value != -1)
            secondArraySum += value;
        else
            ++numNegativesSecondArray;
    }
    if(numNegativesFirstArray == numNegativesSecondArray){
        cout << "Infinite";
        return 0;
    }
    if(numNegativesFirstArray == 1 || numNegativesSecondArray == 1){
        if((numNegativesFirstArray == 1 && firstArraySum > secondArraySum) || (numNegativesSecondArray == 1 && secondArraySum > firstArraySum)){
            cout << "0";
        }else{
            cout << "1";
        }
        return 0;
    }
    if(numNegativesFirstArray == 2 && firstArraySum > secondArraySum){
        cout << 0;
        return 0;
    }
    if(numNegativesSecondArray == 2 && secondArraySum > firstArraySum){
        cout << 0;
        return 0;
    }
    int diff = abs(firstArraySum - secondArraySum);
    if(secondArraySum == firstArraySum){
        cout << "1";
        return 0;
    }
    cout << diff+1;
}