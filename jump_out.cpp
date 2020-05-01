// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/jump-out-34/
// 05-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int numBoosters, RES = 200;
    cin >> numBoosters;
    int boosters[numBoosters] = {0};
    for(int i = 0; i <= numBoosters; i++){
        cin >> boosters[i];
        if(boosters[i] >= (numBoosters - i)){
            cout << i+1;
            break;
        }
    }

}