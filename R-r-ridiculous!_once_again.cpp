// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/k-rotation-is-what-you-can-855157f8/
// 17-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numValues, start;
    cin >> numValues >> start;
    int values[numValues];
    
    for(int i = 0; i < numValues; ++i){
        cin >> values[i];
    }
    
    cout << values[start%numValues] << " ";
    int curr = start;

    while(++curr != start){
        cout << values[curr%numValues] << " ";
        if(curr == numValues){
            curr = 0;
        }
    }

    return 0;
}