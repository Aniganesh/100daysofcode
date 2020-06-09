// https://www.hackerearth.com/problem/algorithm/emeralds-game/description/
// 09-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

vector<int> getDigits(int n){
    vector<int> RES;

    while(n){
        RES.push_back(n%10);
        n /= 10;
    }

    return RES;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int num;
        cin >> num;
        
        if(num == 0){
            cout << "LOSE\n";
        }else{
            set<int> digitsSeen;
            int i = 1;

            while(digitsSeen.size() < 10){
                vector<int> temp = getDigits(num*i++);
                digitsSeen.insert(temp.begin(), temp.end());
            }
            cout << --i*num << endl;
        }

    }
}