// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sum-of-numbers-9/
// 12-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numValues;
        cin >> numValues;
        int values[numValues];
        
        for(int i = 0; i < numValues; ++i){
            cin >> values[i];
        }

        int target;
        cin >> target;
        bool answered = false;

        for(int i = 0; i < (1<<numValues); ++i){
            int sum = 0;
            for(int j = 0; j < numValues; ++j){
                if(i & (1<<j)){
                    sum+=values[j];
                }
            }
            if(sum == target){
                cout << "YES\n";
                answered = true;
                break;
            }
        }

        if(!answered){
            cout << "NO\n";
        }
    }

    return 0;
}