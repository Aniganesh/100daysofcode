// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/
// 20-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numElemSetA;
    cin >> numElemSetA;
    vector<int> setB;
    vector<int> setA(numElemSetA);
    for(int i = 0; i < numElemSetA; i++)
        cin >> setA[i];
    int numElemSetC;
    cin >> numElemSetC;
    vector<int> setC(numElemSetC);
    for(int i = 0; i < numElemSetC; i++)
        cin >> setC[i];
    for(int i = 1; i <= 100; i++){
        bool isPresent = true;
        for(int a: setA)
            if(find(setC.begin(), setC.end(), a + i) == setC.end())
                isPresent = false;
        if(isPresent)
            setB.push_back(i);
    }
    
    for(int b: setB)
        cout << b << " ";
    
}