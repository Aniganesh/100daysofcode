// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/fredo-and-game/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    cin.tie();
    ios::sync_with_stdio();
    int numTests;
    cin >> numTests;
    while(numTests--){
        char pos;
        ll ammo, numPos;
        cin >> ammo >> numPos;
        string course;
        int i = 1;
        bool failed = false;
        while(numPos--){
            cin >> pos;
            course.push_back(pos);
            
            if(pos == '1')
                ammo +=2;
            else
                ammo--;
            if(ammo == 0 && !failed && numPos != 0){
                cout << "No " << i << endl;
                failed = true;
            }
            i++;
        }
        if(!failed)
            cout << "Yes " << ammo << endl;
    }
}