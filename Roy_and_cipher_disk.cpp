// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/roy-and-cipher-disk/
// 17-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        string input;
        cin >> input;
        int dist = input[0] - 97;
        if(dist > 13)
            cout <<  -abs(dist-26) << " ";
        else
            cout << dist << " ";
        for(int i = 1; i < input.length(); i++){
            if(input[i]>=input[i-1]){
                dist = input[i] - input[i-1];
                if(dist > 13)
                    cout << - (26 - dist) << " ";
                else
                    cout << dist << " ";
            }else{
                dist = input[i-1] - input[i];
                if(dist > 12)
                    cout << 26 - dist << " ";
                else
                    cout << -dist << " "; 
            }
        }
        cout << endl;
    }
}