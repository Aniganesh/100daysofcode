// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/gym-freak-tds/
// 08-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numFoodItems, maxFoodWeight;
    cin >> numFoodItems >> maxFoodWeight;
    pair<float,pair<int, int>> foodItems[numFoodItems];
    
    for(int i = 0; i < numFoodItems; ++i){
        cin >> foodItems[i].second.first;
    }

    for(int i = 0; i < numFoodItems; ++i){
        cin >> foodItems[i].second.second;
    }
    
    for(int i = 0; i < numFoodItems; ++i){
        foodItems[i].first = (float)foodItems[i].second.first/(float)foodItems[i].second.second;
    }

    sort(foodItems, foodItems+numFoodItems, greater<pair<float, pair<int,int> > >());
    int RES = 0;

    for(int i = 0; i < numFoodItems; ++i){
        if(foodItems[i].second.second <= maxFoodWeight){
            RES += foodItems[i].second.first;
            maxFoodWeight -= foodItems[i].second.second;
        }else if(foodItems[i].second.second > maxFoodWeight){
            RES += foodItems[i].first*maxFoodWeight;
            break;
        }
        // cout << "prot: " << foodItems[i].second.first << " wt: " << foodItems[i].second.second << " prot per wt: " << foodItems[i].first << endl;
    }

    cout << RES;
    return 0;
}