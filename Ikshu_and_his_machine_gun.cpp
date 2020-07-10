// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ikshu-and-his-machine-gun/
// 10-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numBoxesToKnockOff;
    cin >> numBoxesToKnockOff;
    int boxNums[numBoxesToKnockOff];
    int numKnockedOff = 0;
    
    for(int i = 0; i < numBoxesToKnockOff; ++i){
        cin >> boxNums[i];
    }

    sort(boxNums, boxNums+numBoxesToKnockOff);

    for(int i = 0; i < numBoxesToKnockOff; ++i){
        cout << boxNums[i] - numKnockedOff++ << " ";
    }

    return 0;
}