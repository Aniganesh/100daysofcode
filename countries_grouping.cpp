// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/countries-grouping-1-5b13620a/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numPeople;
        cin >> numPeople;
        int replies[numPeople];
        for(int i = 0; i < numPeople; i++){
            cin >> replies[i];
        }
        bool invalid = false;
        int numCountries = 0;
        long i = 0;
        while(i < numPeople){
            numCountries++;
            int numReq = replies[i];
            if(i+numReq > numPeople){
                invalid = true;
            }
            for(int j = 0; j+i < i + numReq && !invalid; j++){
                if(replies[j+i] != numReq)
                    invalid = true;
            }
            if(invalid)
                break;
            i += numReq;
        }

        if(!invalid){
            cout << numCountries << endl;
        }else{
            cout << "Invalid Data" << endl;
        }
    }
}