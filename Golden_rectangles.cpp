// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/almost-golden-rectangular-1c9d72c0/
// 21-04-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numRectangles;
    cin >> numRectangles;
    int numAcceptable = 0;
    while(numRectangles--){
        double length, breadth;
        cin >> length >> breadth;
        double ratio = max(length, breadth) / min(length, breadth);
        if(ratio >= 1.6 && ratio <= 1.7)
            numAcceptable++;
    }
    cout << numAcceptable;
}