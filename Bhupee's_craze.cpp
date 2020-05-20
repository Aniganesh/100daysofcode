// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bhupees-craze-7d960eab-24ff51e3/
// 20-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    string RES;
    int resUnique = INT_MAX;

    while(numTestcases--){
        int numNames;
        cin >> numNames;
        if(numNames != 0)
            resUnique = INT_MAX;
        for(int i = 0; i < numNames; ++i){
            string name;
            cin >> name;
            unordered_set<char> Unique(name.begin(), name.end());
            if(Unique.size() <= resUnique){
                resUnique = Unique.size();
                RES = name;
            }
        }
        cout << RES << endl;
    }
}