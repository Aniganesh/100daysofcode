// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/
// 22-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numStrings;
    cin >> numStrings;
    while(numStrings--){

        string nameString;
        cin >> nameString;
        int suvo = 0, suvojit = 0;
        if(nameString.length() > 3)
        for(int i = 0; i < nameString.length()-3; i++){
            if(i+6 < nameString.length()){
                if(nameString[i] == 'S' && nameString[i+1] == 'U' && nameString[i+2] == 'V' && nameString[i+3] == 'O' && nameString[i+4] == 'J' && nameString[i+5] == 'I' && nameString[i+6] == 'T'){
                suvojit++;
                }else if(nameString[i] == 'S' && nameString[i+1] == 'U' && nameString[i+2] =='V'&& nameString[i+3] == 'O') {
                    suvo++;
                }
            }else if(nameString[i] == 'S' && nameString[i+1] == 'U' && nameString[i+2] =='V'&& nameString[i+3] == 'O') {
                    suvo++;
                }
        }
        cout << "SUVO = " << suvo << ", SUVOJIT = " << suvojit << endl;
    }
}