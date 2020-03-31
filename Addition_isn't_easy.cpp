// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/addition-aint-simple/
// 31-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string input;
        cin >> input;
        int n = input.size();
        for(int i = 0; i < n; i++)
            if((((input[i]-96)+(input[n-i-1]-96) ) % 26) == 0)
                cout << 'z';
            else
                cout << (char) ((((input[i]-96)+(input[n-i-1]-96) ) % 26) + 96);        
        cout << endl;
    }
}