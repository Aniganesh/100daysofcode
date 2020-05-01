// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/picu-bank-09e29493/
// 23-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int deposit, interest1, interest2, months, requiredAmt;
        cin >> deposit >> interest1  >> months>> interest2 >> requiredAmt;
        requiredAmt -= deposit;
        if(requiredAmt <= 0){
            cout << 0;
            continue;
        }
        // number of times we need to add interest1 & interest2 to the deposit
        int numSets = requiredAmt / (months * interest1 + interest2);
        requiredAmt -= (months * interest1 + interest2) * numSets;
        if(requiredAmt <= 0){
            cout << (numSets * months) + numSets << endl;
        }
        else{
            int RES = (numSets * months) + numSets;
            RES += requiredAmt / interest1;
            if(requiredAmt % interest1 != 0)
                RES++;
            cout << RES << endl;
        }
    }
}