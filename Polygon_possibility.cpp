// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/polygon-possible/
// 06-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        int numSides;
        cin >> numSides;
        vector<int> lengths(numSides);
        for(int i = 0; i < numSides; i++){
            cin >> lengths[i];
        }
        int largest = *max_element(lengths.begin(), lengths.end());
        if(largest < (accumulate(lengths.begin(), lengths.end(), 0)-largest)){ 
            // cout << largest << " " <<(accumulate(lengths.begin(), lengths.end(), 0)- largest << endl;
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}