// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-trains-2/
// 04-06-2020 Very-easy/easy
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
        float royArrival, train1Arrival, train2Arrival, train1Velocity, train2Velocity, distance;
        cin >> royArrival >> train1Arrival >> train2Arrival >> train1Velocity >> train2Velocity >> distance;
        
        if(royArrival > train1Arrival && royArrival > train2Arrival){
            cout << "-1\n";
            continue;
        }

        int RES1 = INT_MAX, RES2 = INT_MAX;
        
        if(royArrival <= train1Arrival)
            RES1 = (int) train1Arrival+ceil(distance * 60 / train1Velocity);
        
        if(royArrival <= train2Arrival)
            RES2 = (int) train2Arrival+ceil(distance * 60 / train2Velocity);
        
        cout << min(RES1, RES2) << endl;
    }
}