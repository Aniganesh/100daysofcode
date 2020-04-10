// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/hack-the-string-9dce7834/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int numOnes(vector<int> arr){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        int tempCount = 0;
        while(arr[i] == 1 && i < arr.size()){
            i++;
            tempCount++;
        }
        
        count = max(count, tempCount);
    }
    return count;
}

int main(){
    int numElements;
    cin >> numElements;
    vector<int> binArr(numElements);
    for(int i = 0; i < numElements; i++){
        cin >> binArr[i];
    }
    int maxCount = numOnes(binArr);
    for(int i = 0; i < numElements; i++){
        for(int j = i+1; j < numElements; j++){
            swap(binArr[i],binArr[j]);
            maxCount = max(maxCount, numOnes(binArr));
            swap(binArr[i],binArr[j]);
        }
    }
    cout << maxCount;
}