// https://www.hackerearth.com/problem/algorithm/monkey-and-anagram/
// 02-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        string first, second;
        cin >> first >> second;
        bool fail = false;
        map<char, int> alphaFreqFirst, alphaFreqSecond;

        for(char i:first){
            ++alphaFreqFirst[i];
            if(second.find(i) == string::npos){
                fail = true;
                break;
            }
        }
        int uniqueCounts = 0;

        for(char i: second){
            ++alphaFreqSecond[i];
        }

        for(pair<char, int> i: alphaFreqSecond){
            uniqueCounts += (i.second - alphaFreqFirst[i.first]) > 0;
            if((i.second - alphaFreqFirst[i.first]) < 0){
                fail = true;
                break;
            }
        }
            
        if(fail){
            cout << "-1\n";
        }else{
            cout << uniqueCounts << endl;
        }
    }
}