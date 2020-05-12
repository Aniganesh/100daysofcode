// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mixing-strings-1/
// 12-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int arrangement[17];
string input[17];

int main(){
    int numStrings;
    cin >> numStrings;
    
    for(int i = 0; i < numStrings; ++i)
        arrangement[i] = i;

    for(int i = 0; i < numStrings; ++i){
        cin >> input[i];
    }

    int minim = INT_MAX;
    do {
        int len = input[arrangement[0]].length();
        for(int i = 0; i < numStrings-1; ++i){
            int longest = 1e9;

            for(int j = 0; j < input[arrangement[i]].size(); ++j){
                int num = 0; 
                int h = j;

                for(int k = 0; k < input[arrangement[i+1]].size() && h < input[arrangement[i]].size(); ++k, ++h){
                    if(input[arrangement[i]][h] == input[arrangement[i+1]][k])
                        ++num;
                    else{
                        num = 0;
                        break;
                    }
                }

                if(h != input[arrangement[i]].size())
                    num = 0;
                
                longest = min(longest, (int) input[arrangement[i+1]].size() - num);
            }
            len += longest;
        }
        minim = min(minim, len);
    }while(next_permutation(arrangement, arrangement+numStrings));
    cout << minim;
    return 0;
}