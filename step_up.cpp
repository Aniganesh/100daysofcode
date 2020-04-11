// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/step-up-0aa9708f/
// 11-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool isPrime(int a){
    int i = 2;
    while(i <= sqrt(a)){
        if(a % i == 0)
            return false;
        ++i;
    }
    return true;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int start, end;
        cin >> start >> end;
        int numPrints = 0;
        for(;start <= end; start++){
            if(!isPrime(start)){
                cout << start << endl;
                numPrints++;
            }
        }
        cout << numPrints << endl;
    }
}