// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bus-journey-3754c143/
// 26-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numStops, numSeats;
    cin >> numStops >> numSeats;
    int timeStanding = 0;
    int currentNumPeopleOnBus = 0;
    while(numStops--){
        int getIn, getOff;
        cin >> getIn >> getOff;
        currentNumPeopleOnBus += getIn;
        currentNumPeopleOnBus -= getOff;
        if(currentNumPeopleOnBus >= numSeats && numStops != 0){
            
            ++timeStanding;
        }
        // cout << currentNumPeopleOnBus << " seat capacity " << numSeats << endl;
    }
    cout << timeStanding;
}