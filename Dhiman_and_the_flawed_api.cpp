// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/dhiman-and-the-flawed-api/
// 29-05-2020 Medium

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

template<typename T>
string NumberToString(T num){
    stringstream s;
    s << num;
    return s.str();
}

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    bool valid[700] = {false};
    ll fibonacciNums[80];
    fibonacciNums[0] = 0;
    fibonacciNums[1] = 1;
    string fibonacciNumsString = "01";
    valid[0] = valid[1] = true;
    
    for(int i = 2; i < 80; ++i){
        fibonacciNums[i] = fibonacciNums[i-1] + fibonacciNums[i-2];
        fibonacciNumsString += NumberToString(fibonacciNums[i]);
        valid[fibonacciNumsString.length()-1] = true;
    }

    while(numTestcases--){
        int validString = true;
        string apiString;
        cin >> apiString;
        int i;
        if(apiString[0] == '0'){
            i = 0;
        }else if(apiString[0] == '2'){
            i = 3;
        }else if(apiString[0] == '3'){
            i = 4;
        }else if(apiString[0] == '5'){
            i = 5;
        }else if(apiString[0] == '8'){
            i = 6;
        }else {
            if(apiString.length()>1){
                if(apiString[1] == '1'){
                    i = 1;
                }else{
                    i = 2;
                }
            }else {
                i = 1;
            }
        }

        for(int j = 0; j < apiString.length(); ++i, ++j){
            if(apiString[j] != fibonacciNumsString[i]){
                validString = false;
                break;
            }
        }

        if(validString && valid[i-1]){
            cout << "Valid\n";
        }else{
            cout << "Invalid\n";
        }
        
    }

    return 0;
}