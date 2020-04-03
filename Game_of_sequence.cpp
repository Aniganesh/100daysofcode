// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bracket-balancer-b9f56e12/
// 03-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements, temp;
        cin >> numElements;
        set<long long> sequence;
        for(int i = 0; i < numElements; i++){
            cin >> temp;
            sequence.insert(temp);
        }
        if(sequence.size() % 2 == 0)
            cout << "Q"<< endl;
        else
            cout << "P" << endl;
    }
}