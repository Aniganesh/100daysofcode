// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/challenging-track-0d6a36ad/
// 05-40-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ll numHurdles, jumpPower, time = 1, count = 0;
        // bool impossible = false;
        cin >> numHurdles >> jumpPower;
        ll hurdleHeight[numHurdles];

        for(int i = 0; i < numHurdles; i++){
            cin >> hurdleHeight[i];
            if(i != 0 && !(hurdleHeight[i] & 1))
                hurdleHeight[i]--;
        }
        jumpPower -= hurdleHeight[0];
        for(;time < numHurdles; time++){
            jumpPower -= max((ll) 0, hurdleHeight[time] - count);
            count++;
        }
        if(jumpPower < 0){
            cout << "No" << endl;
        }else{
            cout << "Yes " << jumpPower << endl;
        }
    }
}