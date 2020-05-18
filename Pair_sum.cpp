// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pair-sum-1-0062d9ab/
// 18-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues, sumToFind;
    cin >> numValues >> sumToFind;
    int values[numValues];

    for(int i = 0; i < numValues; ++i){
        cin >> values[i];
    }
    sort(values, values+numValues);
    bool answered = false;

    int i = 0, j = numValues-1;
    while(i < j){
        if(values[i]+values[j] == sumToFind){
            cout << "YES";
            answered = true;
            break;
        }
        if(values[i]+values[j] < sumToFind){
            ++i;
        }
        if(values[i] + values[j] > sumToFind){
            ++j;
        }
    }

    if(!answered)
        cout << "NO";
}
