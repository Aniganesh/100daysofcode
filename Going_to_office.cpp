// https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/
// 16-04-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    ll distanceHome, OLTfirstCost, OLTfirstDist, OLTperkm;
    cin >> distanceHome >> OLTfirstCost >> OLTfirstDist >> OLTperkm;
    ll OLTtotalCost;
    if(distanceHome >= OLTfirstDist)
        OLTtotalCost = (distanceHome-OLTfirstDist)*OLTperkm + (OLTfirstCost);
    else
        OLTtotalCost = OLTfirstCost;
    ll CTspeed, CTbase, CTperMin, CTperkm;
    cin >> CTspeed >> CTbase >> CTperMin >> CTperkm;
    ll CTtotalCost;
    CTtotalCost = CTbase + double(distanceHome / CTspeed) * CTperMin + CTperkm * distanceHome;
    if(CTtotalCost >= OLTtotalCost)
        cout << "Online Taxi\n";
    else
        cout << "Classic Taxi\n" ;
    return 0;
}