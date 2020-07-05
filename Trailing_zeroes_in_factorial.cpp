// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/trailing-zeroes-in-factorial/description/
// 05-07-2020 Hard
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int numFivePowersInFact(int x){
    int RET = 0;
    while(!(x%5)){
        x/=5;
        ++RET;
    }
    return RET;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;

    while(numTestcases--){
        int numTrailingZeroes;
        cin >> numTrailingZeroes;
        int start = 0, i;
        for(i = 1; start < numTrailingZeroes; ++i){
            start += numFivePowersInFact(i);
        }
        if(start == numTrailingZeroes){
            cout << "5\n" << i - 1<< " " << i << " " << i + 1 << " " << i + 2 << " " << i + 3;
        }else{
            cout << 0;
        }
        cout << endl;
    }
    
    return 0;
}
