// https://www.hackerearth.com/practice/data-structures/arrays/1-d/tutorial/
// 18-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues;
    cin >> numValues;
    int value[numValues];
    for(int i = 0; i < numValues; ++i){
        cin >> value[i];
    }
    while(numValues--){
        cout << value[numValues] << endl;
    }
}