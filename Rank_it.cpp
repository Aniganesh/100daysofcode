// https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/
// 15-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    int values[numValues];
    for(int i = 0; i < numValues; ++i){
        cin >> values[i];
    }
    sort(values, values+numValues);
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int numToSearchFor;
        cin >> numToSearchFor;
        int left = 0, right = numValues - 1;
        bool found = false;
        while(left <= right){
            int mid = (left + right) / 2;
            if(values[mid] == numToSearchFor){
                cout << mid+1 << endl;
                found = true;
                break;
            }
            if(values[mid] < numToSearchFor){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
    }
    return 0;
}