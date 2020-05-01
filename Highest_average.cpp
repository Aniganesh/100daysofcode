// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/highest-average-64bdd761/
// 25-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numElements;
    cin >> numElements;
    ll arrayElements[numElements+1] = {0};
    ll sumElements[numElements+1] = {0};

    for(int i = 1; i <= numElements; i++){
        cin >> arrayElements[i];
    }
    sort(arrayElements+1, arrayElements+numElements+1);
    for(int i = 1; i <= numElements; i++){
        sumElements[i] = sumElements[i - 1] + arrayElements[i];
    }
    vector<int> averages;
    for(int i = 1; i <= numElements; i++){
        averages.push_back(sumElements[i] / i);
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int requiredAvg;
        cin >> requiredAvg;
        int RES = 0;
        cout << lower_bound(averages.begin(), averages.end(), requiredAvg) - averages.begin() << endl;
    }
        
}