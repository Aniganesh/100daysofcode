// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-search-2/
// 24-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numElements;
    cin >> numElements;
    vector<int> elements(numElements);
    for(int i = 0; i < numElements; i++)
        cin >> elements[i];
    sort(elements.begin(), elements.end());
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        bool greaterThan;
        int value;
        cin >> greaterThan >> value;
        vector<int>::iterator bound = lower_bound(elements.begin(), elements.end(), value);
        if(greaterThan){
            while(*bound == value)
                bound++;
        }
        cout << numElements - (bound - elements.begin()) << endl;
    }
}