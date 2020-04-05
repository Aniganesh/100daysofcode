// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56
// 05-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for(int i_test = 1; i_test <= testcases; i_test++){
        long long numHouses, budget, count = 0;
        cin >> numHouses >> budget;
        vector<long long> houses(numHouses);
        for(long long i_house = 0; i_house < numHouses; i_house++){
            cin >> houses[i_house];
        }
        sort(houses.begin(), houses.end());
        long long i_house = 0;
        for(long long i = 0; i < houses.size(); i++){
            if(budget >= houses[i]){
                budget -= houses[i];
                count++;
            }
        }
        cout << "Case #" << i_test << ": " << count << endl;
    }
}