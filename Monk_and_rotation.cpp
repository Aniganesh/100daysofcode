// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/
// 07-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numValues, numRotations;
        cin >> numValues >> numRotations;
        deque<int> values;
        int value;
        for(int i = 0; i < numValues; ++i){
            cin >> value;
            values.push_back(value);
        }
        for(int i = 0 ; i < numRotations; ++i){
            values.push_front(values.back());
            values.pop_back();
        }
        for(int i = 0; i < numValues; ++i){
            cout << values[i] << " ";
        }
        cout << endl;
    }
}