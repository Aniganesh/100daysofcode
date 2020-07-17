// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/sumit-and-equal-array/
// 17-07-2020 Very-easy/easy
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
        int numValues, x, y, z;
        cin >> numValues >> x >> y >> z;
        int value;
        bool shecan = true;
        int prevNum = -1;

        while(numValues--){
            cin >> value;
            while(!(value % x)) value /= x;
            while(!(value % y)) value /= y;
            while(!(value % z)) value /= z;
            
            if(prevNum != -1 && value != prevNum){
                shecan = false;
            }

            prevNum = value;
        }

        if(shecan){
            cout << "She can\n";
        }else{
            cout << "She can't\n";
        }

    }

    return 0;
}