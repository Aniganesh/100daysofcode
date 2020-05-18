// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximum-of-k-size-subarrays-deque/
// 18-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues, subarraySize;
    cin >> numValues >> subarraySize;
    vector<int> values(numValues);
    // cin >> values[0];
    for(int i = 0; i < numValues; i++){
        cin >> values[i];
    }

    for(int i = 0; i <= numValues-subarraySize; i++){
        cout << *max_element(values.begin()+i, values.begin()+i+subarraySize) << " ";
    }
}