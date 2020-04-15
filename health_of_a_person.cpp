// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/attack-of-the-mind-flayer-3-119b5d47/
// 15-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

ll health[int(1e6+5)];
int getsSickOn[int(1e6+5)];

using namespace std;

int main(){
    cin.tie();
    ios::sync_with_stdio();
    cout.tie();
    int testcases, healthLoss, numPeople, numDays;
    cin >> testcases;
    while(testcases--){
        scanf("%d %d", &numPeople, &numDays);
        
        for(int i = 1; i <= numPeople; i++)
            scanf("%lld", &health[i]);

        memset(getsSickOn, -1, sizeof getsSickOn);
        for(int i = 1; i <= numDays; i++){
            scanf("%d", &healthLoss);
            for(int person = i; person <= numPeople; person+=i){
                if(health[person] <= healthLoss && getsSickOn[person] == -1)
                    getsSickOn[person] = i;
            }
        }
        for(int i = 1; i < numPeople+1; i++)
            printf("%d\n",getsSickOn[i]);
    }
}