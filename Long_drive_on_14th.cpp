// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/long-drive-on-14th/
// 28-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int testcases, maxHappy;
    cin >> testcases;
    while(testcases--){
        ll constant1, constant2, power1, power2, maxHappy;
        cin >> constant1 >> constant2 >> power1 >> power2 >> maxHappy;
        ll low = 0, high = 1e6+5;
        while(low <= high){
            ll mid = (low + high) / 2;
            if(constant1*pow(mid,power1) + constant2*pow(mid, power2) > maxHappy)
                high = mid - 1;
            else
                low = mid + 1;
        }
        low--;
        if(low < 1e5)
            cout << low << endl;
        else
            cout << "Love is immortal\n";
    }
}