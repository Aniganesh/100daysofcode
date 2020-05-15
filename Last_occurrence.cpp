// https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/
// 15-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues, valueToSearchFor;
    cin >> numValues >> valueToSearchFor;
    int values[numValues];
    for(int i = 0; i < numValues; ++i){
        cin >> values[i];
    }
    bool found = false;
    for(int i = numValues; i > 0; --i){
        if(values[i] == valueToSearchFor){
            cout <<  i+1 << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout  << -1;
}