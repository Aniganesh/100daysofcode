// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
// 20-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numElements;
    cin >> numElements;
    int elements[numElements];
    for(int i = 0; i < numElements; i++)
        cin >> elements[i];
    int numTofind;
    cin >> numTofind;
    for(int i = 0; i < numElements; i++)
        if(elements[i] == numTofind){
            cout << i;
            break;
        }

}