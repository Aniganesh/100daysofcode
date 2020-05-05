// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
// 05-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numBits, numQueries;
    cin >> numBits >> numQueries;
    vector<bool> bits(numBits+1);
    int num;
    for(int i = 1; i <= numBits; i++){
        cin >> num;
        bits[i] = num;
    }
    while(numQueries--){
        int type;
        cin >> type;
        if(type == 1){
            int pos;
            cin >> pos;
            bits[pos] = !bits[pos];
        }
        else{
            int left, right;
            cin >> left >> right;
            if(bits[right] & 1){
                cout << "ODD\n";
            }else{
                cout << "EVEN\n";
            }
        }
    }
}
