// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-game-of-oxa/
// 20-06-2020 Very-easy/easy
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
        string prediction;
        cin >> prediction;
        int numValues;
        cin >> numValues;
        int values[numValues];
        bool monk = (prediction == "Even"? 0: 1);
        for(int i = 0; i < numValues; ++i){
            cin >> values[i];
        }

        int RES = 0, lim = pow(2, numValues), amask = 0;

        for(int mask = 0; mask < lim; ++mask){
            int temp = -1;
            int j = 0;
            for(int i = 0; i < 17; ++i){
                if(mask&(1<< i)){
                    if(temp == -1){
                        temp = values[i];
                    }else{
                        if(j%3 == 1){
                            temp  ^= values[i];
                        }else if(j%3 == 2){
                            temp += values[i];
                        }else{
                            temp |= values[i];
                        }
                        ++j;
                    }
                }
            }
            if(temp > RES){
                RES = temp;
                amask = mask;
            }    
        }
        if(RES%2 != monk){
            cout << "Mariam\n";
        }else{
            cout << "Monk\n";
        }

    }
    
    return 0;
}