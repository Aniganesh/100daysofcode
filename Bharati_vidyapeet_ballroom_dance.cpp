// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bharti-ada5791f/
// 16-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numBoys;
    cin >> numBoys;
    int boysSkill[numBoys];
    int numGirls;
    for(int i = 0; i < numBoys; i++)
        cin >> boysSkill[i];
    cin >> numGirls;
    int  girlsSkill[numGirls];
    for(int i = 0; i < numGirls; i++)
        cin >> girlsSkill[i];
    sort(girlsSkill, girlsSkill+numGirls);
    sort(boysSkill, boysSkill+numBoys);
    int i = 0, j = 0, numPairs = 0;
    while(1){
        if(i > numBoys-1 || j > numGirls-1){
            break;
        }
        if(abs(girlsSkill[j]-boysSkill[i]) <= 1)
            numPairs++, i++, j++;
        else if(girlsSkill[j] > boysSkill[i])
            i++;
        else j++;
    }
    cout << numPairs << endl;
}