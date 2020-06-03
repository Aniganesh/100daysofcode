// https://www.hackerearth.com/problem/algorithm/density-2/submissions/
// 03-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int stringLen;
    cin >> stringLen;
    int stringDensity = 0;
    string word;

    while(!cin.eof()){
        cin >> word;
        int countSmall = 0, countCapital = 0;

        for(char ch: word){
            countCapital += (ch >= 'A' && ch <= 'Z');
            countSmall += (ch >= 'a' && ch <= 'z');
        }

        stringDensity = max(stringDensity, abs(countCapital - countSmall));
    }

    cout << stringDensity;
    return 0;    
}
