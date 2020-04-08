// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/inverse-list/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements;
        bool flag = false;
        cin >> numElements;
        vector<int> mainvec(numElements+1), store(numElements+1);
        for(int i = 1; i <= numElements; i++){
            cin >> mainvec[i];
            store[mainvec[i]] = i;
        }
        
        for(int i = 0; i < numElements; i++){
            if(mainvec[i] != store[i]){
                flag = true;
                cout << "not inverse" << endl;
                break;
            }
        }
        if(!flag)
            cout << "inverse" << endl;
    }
}