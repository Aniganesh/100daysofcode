// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/jiva-the-self-driven-car/
// 22-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numPassengers, maxPassengers;
        cin >> numPassengers >> maxPassengers;
        pair<int, int> startAndEnd[numPassengers];
        double RES = 0;
        bool cabFull = false;

        for(int i = 0; i < numPassengers; ++i){
            cin >> startAndEnd[i].first >> startAndEnd[i].second;
        }

        vector<int> cab;
        
        for(int i = 0; i <= 100; ++i){

            for(int j = 0; j < cab.size(); ++j){
                
                if(i == startAndEnd[cab[j]].second){
                    cab.erase(cab.begin() + j);
                    --j;
                }

            }

            for(int j = 0; j < numPassengers; ++j){
                
                if(cab.size() == maxPassengers){
                    break;
                }
                
                if(startAndEnd[j].first == i){
                    cab.push_back(j);
                }

            }
            
            int numPersonsBoarded = cab.size();
            if(numPersonsBoarded == maxPassengers){
                cabFull = true;
            }

            if(numPersonsBoarded == 2){
                RES += 9.5 * numPersonsBoarded;
            }
            else if(numPersonsBoarded >= 3){
                RES += 9.3 * numPersonsBoarded;
            }else {
                RES += 10 * numPersonsBoarded;
            }
        }
        cout << (int) (RES + 0.5) << (cabFull? " Cab was full" : "") << endl;
    }
    
    return 0;
}