// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/raeess-liquor-tank/
// 10-05-2020 Very-easy/easy
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int numTanks, tmp;
    cin >> numTanks;
    vector<int> heights(numTanks);
    for(int i=0; i < numTanks; i++){
        cin >> heights[i];
    }
    
    int ans = 0;
    int temp = 0, curr=0;
    for(int i = 0; i < heights.size()-1; i++){
        if(heights[i+1] < heights[curr]){
            temp += (heights[curr] - heights[i+1]);
        }
        if(heights[i+1] >= heights[curr]){
            curr = i+1;
            ans += temp;
            temp = 0;
        }
    }
    
    
    temp = 0;
    curr = heights.size()-1;
    for(int i=heights.size()-1; i>0; i--){
        if(heights[i-1] < heights[curr]){
            temp += (heights[curr] - heights[i-1]);
        }
        if(heights[i-1] > heights[curr]){
            curr = i-1;
            ans += temp;
            temp = 0;
        }
    }
    
    cout<<ans<<endl;
}