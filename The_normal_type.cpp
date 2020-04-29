// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/the-normal-type/
// 29-04-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numElements;
    cin >> numElements;
    int arr[numElements];
    set<int> uniqueElements;
    for(int i = 0; i < numElements; i++){
        cin >> arr[i];
        uniqueElements.insert(arr[i]);
    }
    ll RES = 0;
    int j = 0;
    set<int> subsetUnique;
    map<int, int> freq;
    for(int i = 0; i < numElements; i++){
        j = max(i,j);
        while(j < numElements and subsetUnique.size() < uniqueElements.size()){
            freq[arr[j]]++;
            if(freq[arr[j]] == 1){
                subsetUnique.insert(arr[j]);
            }
            j++;
        }
        if(subsetUnique.size() == uniqueElements.size())
            RES += numElements - j + 1;
        freq[arr[i]]--;
        if(freq[arr[i]]==0)
            subsetUnique.erase(arr[i]);
    }
    cout << RES;
}