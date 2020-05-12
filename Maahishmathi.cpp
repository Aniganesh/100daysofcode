// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/maahismathi/
// 12-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numHouses;
    cin >> numHouses;
    long numGoldPlatesInIthHouse[numHouses];
    for(int i = 0; i < numHouses; ++i){
        cin >> numGoldPlatesInIthHouse[i];
    }
    
    sort(numGoldPlatesInIthHouse, numGoldPlatesInIthHouse + numHouses);

    for(int i = 1; i < numHouses; i++){
        numGoldPlatesInIthHouse[i] += numGoldPlatesInIthHouse[i-1];
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        int numHousesForFree, RESINDEX;
        cin >> numHousesForFree;
        double a = (float) numHouses/(float)(numHousesForFree+1);
        int b = numHouses/(numHousesForFree+1);
        if(a-b > 0.0){
            RESINDEX = b+1;
        }else{
            RESINDEX = b;
        }
        cout << numGoldPlatesInIthHouse[RESINDEX-1] << endl;
    }
}