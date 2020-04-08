// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/special-price/description/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numDeos;
    cin >> numDeos;
    ll deoPrice[numDeos+1];
    deoPrice[0] = 0;
    for(int i = 1; i <= numDeos; i++)
        cin >> deoPrice[i];
    sort(deoPrice, deoPrice+numDeos+1);
    ll sumDeoPrice[numDeos+1];
    sumDeoPrice[0] = 0;
    for(int i = 1; i <= numDeos; i++){
        sumDeoPrice[i] = sumDeoPrice[i-1]+deoPrice[i];
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        ll minimum, maximum, sum = 0;
        cin >> minimum >> maximum;
        ll low = lower_bound(deoPrice, deoPrice+numDeos+1, minimum) - deoPrice;
        ll high = upper_bound(deoPrice, deoPrice+numDeos+1, maximum) - deoPrice;
        sum = sumDeoPrice[high]-sumDeoPrice[low];    
        if(low == 0)
            sum = sumDeoPrice[high-1];
        else{
            sum = sumDeoPrice[high-1]-sumDeoPrice[low-1];            
        } 
        cout << sum << endl;
    }
}