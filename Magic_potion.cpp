// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/magic-potion-d54349f9/
// 01-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;
vector<ll> elements, sumElements;

ll getSum(int right, int left){
    return sumElements[right] - sumElements[left - 1];
}

int lowerIndex(int idx, int left, int right, ll requiredSum){
    if(requiredSum < 0)
        return -1;
    int RET = -1, mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(getSum(mid, idx) == requiredSum){
            RET = mid;
            right = mid - 1; // Most important difference between the two functions
        }else if(getSum(mid, idx) < requiredSum){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return RET;
}

int upperIndex(int idx, int left, int right, ll requiredSum){
    if(requiredSum < 0)
        return -1;
    int RET = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(getSum(mid, idx) == requiredSum){
            RET = mid;
            left = mid + 1;
        }else if(getSum(mid, idx) > requiredSum)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return RET;
}

int main(){
    int numElements, reqSum;
    cin >> numElements >> reqSum;
    elements.resize(numElements+1), sumElements.resize(numElements+1);
    for(int i = 1; i <= numElements; i++){
        cin >> elements[i];
        sumElements[i] = sumElements[i-1] + elements[i];
    }
    ll RES = 0;
    int minReps = numElements;
    for(int i = 1; i <= numElements; i++){
        int lesserIndex = lowerIndex(i, i, numElements, reqSum);
        int higherIndex = upperIndex(i, i, numElements, reqSum);
        if(lesserIndex != -1)
            RES += (higherIndex - lesserIndex + 1);
        minReps = min(minReps, (i-1) + (numElements - higherIndex));
    }
    cout << RES << " " << minReps;
}