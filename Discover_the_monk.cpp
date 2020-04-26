// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/discover-the-monk/
// 26-04-2020 Very-easy/easy
// Implemented binary search on my own since the question required a binary search and nothing else.
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numValues, numQueries;
    cin >> numValues >> numQueries;
    int haystack[numValues];
    for(int i = 0; i < numValues; i++)
        cin >> haystack[i];
    sort(haystack, haystack+numValues);
    int needle;
    while(numQueries--){
        cin >> needle;
        int lowIndex = 0, highIndex = numValues-1;
        bool found = false;
        while(lowIndex <= highIndex){
            int mid = (highIndex + lowIndex) / 2;
            if(haystack[mid] == needle){
                cout << "YES\n";
                found = true;
                break;
            }
            if(haystack[mid]  > needle)
                highIndex = mid - 1 ;
            else
                lowIndex = mid + 1;
        }
        if(!found) 
            cout << "NO\n";
    }
}