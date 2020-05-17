// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/
// 17-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numNames;
    cin >> numNames;
    map<int, string> rollNo_Name_mapping;
    int rollNo;
    string name;
    while(numNames--){
        cin >> rollNo >> name;
        rollNo_Name_mapping[rollNo] = name;
    }
    int numQueries;
    cin >> numQueries;
    while(numQueries--){
        cin >> rollNo;
        cout << rollNo_Name_mapping[rollNo] << endl;
    }
}