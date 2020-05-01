// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/compress-the-string-capillary-82bf96a4/
// 14-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool isVowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return true;
    
    return false;
}

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int numchars;
        cin >> numchars;
        string input;
        cin >> input;
        int len = input.length();
        string RES;
        RES.push_back(toupper(input[0]));
        for(int i = 1; i < len; i++){
            int cons = 0;
            if(input[i] != RES[RES.length()-1] && isVowel(input[i]))
                RES.push_back(input[i]);
            while(!isVowel(input[i]) && i < len){
                i++;
                cons++;
            }
            if(cons!=0){
                RES+= to_string(cons);
                if(i < len)
                    RES.push_back(input[i]);
            }
        }
        cout << RES << endl;
    }
}