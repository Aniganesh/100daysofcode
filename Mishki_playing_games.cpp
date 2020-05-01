// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mishki-playing-games/
// 13-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int stones[int(1E6)];
int sumNumTurns[int(1E6+1)];

int numTurns(int a){
    int TURNS = 0;
    while(a){
        a >>= 1; //equivalent to x/=2. chosen since this is faster.
        TURNS++;
    }
    return TURNS;
}

int main(){
    
    int numSets, numDays;
    scanf("%d %d", &numSets, &numDays);
    for(int i = 0; i < numSets; i++)
        scanf("%d", &stones[i]);

    sumNumTurns[0] = 0;

    for(int i = 1; i <= numSets; i++){
        sumNumTurns[i] = sumNumTurns[i-1] + numTurns(stones[i-1]);
    }
    while(numDays--){
        int left, right;
        scanf("%d %d", &left, &right);
        int turnsToday = sumNumTurns[right] - sumNumTurns[left-1];
        if(turnsToday & 1){
            printf("Mishki\n");
        }
        else{
            printf("Hacker\n");
        }
    }
}
//scanf & printf faster than cin, cout with fast i/o