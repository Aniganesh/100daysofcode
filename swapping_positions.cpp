// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mr-x-and-string-4836920e/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int strLength;
        cin >> strLength;
        string strOne, strTwo;
        cin >> strOne >> strTwo;
        if(strOne==strTwo){
            cout << "YES\n";continue;
        }
        int numMismatches = 0;
        vector<int> mismatches1, mismatches2;
        for(int i = 0; i < strLength; i++){
            if(strOne[i] != strTwo[i]){
                numMismatches++;
                mismatches1.push_back(strOne[i]);
                mismatches2.push_back(strTwo[i]);
            }
            if(numMismatches > 3)
                break;
        }
        bool signal = false;
        if(numMismatches > 3){
            cout << "NO\n";continue;
        }else
        if(numMismatches <= 1){
            cout << "YES\n"; continue;
        }else
        if(numMismatches == 2){
            map<char, int> changeChars;
            changeChars[mismatches1[0]]++;
            changeChars[mismatches1[1]]++;
            changeChars[mismatches2[0]]++;
            changeChars[mismatches2[1]]++;
            if(changeChars.size() < 4){
                cout << "YES\n";continue;
            }
        }
        else
        if(numMismatches == 3){
            for(int i = 0; i<3; i++)
            {
                map<char,int> mp;
                mp[mismatches1[(i+1)%3]]++;
                mp[mismatches1[(i+2)%3]]++;
                mp[mismatches2[(i+1)%3]]++;
                mp[mismatches2[(i+2)%3]]++;
                
                if(mp.size() == 2){
                    cout << "YES\n";
                    signal = true;
                    break;
                }
            }
        }
        if(!signal)
            cout << "NO\n";
        
    }
}