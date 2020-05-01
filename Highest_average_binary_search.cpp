// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/highest-average-25400da7/editorial/
// 28-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie();
    int numElements;
    cin >> numElements;
    int elements[numElements+1];
    elements[0] = 0;
    for(int i = 1; i <= numElements; i++){
        cin >> elements[i];
    }
    sort(elements, elements+numElements+1);
    ll sums[numElements+1];
    
    sums[0] = 0;
    for(int i = 1; i <= numElements; i++){
        sums[i] = sums[i-1] + elements[i];
    }
    vector<double> averages;
    for(int i = 1; i <= numElements; i++){
        averages.push_back(sums[i]/double(i));
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        double k;
        cin >> k;
        cout << lower_bound(averages.begin(), averages.end(), k) - averages.begin() << endl;
    }
}