// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cake-2/
// 24-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int size;
    cin >> size;
    
    int numStrawberriesInTopHalfCols[size] = {0}, numStrawberriesInBottomHalfCols[size] = {0};
    int topHalfTotal = 0, bottomHalfTotal = 0;

    for(int row = 1; row <= size; ++row){
        string temp;
        cin >> temp;
        for(int i = 0; i < temp.size(); ++i){
            if(row <= size/2){
                numStrawberriesInTopHalfCols[i] += (temp[i] - 48);
                topHalfTotal += (temp[i] - 48);
            }else{
                if(temp[i] == '1'){
                    numStrawberriesInBottomHalfCols[i] += (temp[i] - 48);
                    bottomHalfTotal += (temp[i] - 48);
                }
            }
        }
    }

    int RES = abs(topHalfTotal-bottomHalfTotal);

    for(int i = 0; i < size; ++i){
        int x = topHalfTotal - numStrawberriesInTopHalfCols[i] + numStrawberriesInBottomHalfCols[i];
        int y = bottomHalfTotal - numStrawberriesInBottomHalfCols[i] + numStrawberriesInTopHalfCols[i];
        RES = min(RES, abs(x-y));
    }
    
    cout << RES;

    return 0;
}