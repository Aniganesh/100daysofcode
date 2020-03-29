// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/magical-tree/
// 29-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int numLeaves;
    cin >> numLeaves;
    string leafValue;
    int maxValue = 0;
    int tempvalue = 0;
    int op = 0;
    for(int i = 0; i < numLeaves; i++){
        cin >> leafValue;
        tempvalue = leafValue[0] - 48;
        for(int j = 1; j < leafValue.size(); j++){
            if(leafValue[j] == '+')
                tempvalue += (leafValue[j+1] - 48);
            else
                tempvalue -= (leafValue[j+1] - 48);
            j++;
        }
        maxValue = max(tempvalue, maxValue);
    }
    cout << maxValue;
}