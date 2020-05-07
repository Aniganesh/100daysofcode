// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pepper-and-contiguous-even-subarray-9f3adf65/
// 07-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numValues;
        cin >> numValues;
        int values[numValues];
        int continuousEven = 0, largestEven = 0;
        for(int i = 0; i < numValues; ++i){
            cin >> values[i];
            if(!(values[i] & 1)){
                ++continuousEven;
            }else{
                continuousEven = 0;
            }
            largestEven = max(largestEven, continuousEven);
        }
        if(largestEven != 0)
            cout << largestEven << endl;
        else
            cout << "-1\n";
    }
}