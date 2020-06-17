// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-corona-virus/
// 17-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    ll tangoPos;
    cin >> tangoPos;
    bitset<64> bits(tangoPos);
    cout << "YES\n";
    int setBits = 0;
    vector<int> timeOfJump;

    for(int i = 0; i < 64; ++i){
        setBits += bits[i];
        if(bits[i]){
            timeOfJump.push_back(i);
        }
    }

    cout << setBits << endl;
    
    for(int i: timeOfJump){
        cout << i << " ";
    }
}