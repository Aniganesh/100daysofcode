// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/
// 21-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTexts;
    cin >> numTexts;
    int date19Weight = 0, date20Weight = 0, otherDateWeight = 0;
    while(numTexts--){
        string currentText;
        cin.ignore();
        getline(cin, currentText);
        int weight;
        if(currentText[0] == 'G')
            weight = 2;
        else
            weight = 1;
        for(int i = 0; i < currentText.length() - 1; i++){
            int digit1 = currentText[i]-48;
            int digit2 = currentText[i+1]-48;
            if(digit1 >=0 && digit1 <= 9 && digit2 >= 0 && digit2 <= 9){
                if(digit1 == 1 && digit2 == 9)
                    date19Weight += weight;
                else if(digit1 == 2 && digit2 == 0)
                    date20Weight += weight;
                else
                    otherDateWeight += weight;
            }
        }
    }
    if(date19Weight == date20Weight || date20Weight == otherDateWeight || otherDateWeight > date19Weight && otherDateWeight > date20Weight)
            cout << "No Date";
        else
            cout <<"Date";
}