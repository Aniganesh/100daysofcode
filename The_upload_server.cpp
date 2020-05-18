// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-upload-server-15bac95e/
// 18-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool hasAlpha(string &str){
    for(int i = 0, j = str.length()-1; i <= j; ++i, --j){
        if(isalpha(str[i]) || isalpha(str[j])){
            return true;
        }
    }
    return false;
}

int main(){
    int testcases;
    cin >> testcases;
    getchar(); // Get newline character
    while(testcases--){
        string inpFile;
        getline(cin, inpFile);
        int numWords = count(inpFile.begin(), inpFile.end(), ' ') + 1;
        if(numWords < 3){
            string part1 = inpFile.substr(0, inpFile.find(' '));
            string part2 = inpFile.substr(inpFile.find(' ')+1, string::npos);
            if((hasAlpha(part1) && hasAlpha(part2)) || (!hasAlpha(part1) && part1[0] == '0')||(!hasAlpha(part2) && part2[0]=='0')){
                cout << "N\n";
            }else if((hasAlpha(part1) && !hasAlpha(part2)) || (!hasAlpha(part1) && hasAlpha(part2))){
                cout << "M\n";
            }else{
                cout << "N\n";
            }

            continue;
        }

        string part1 = inpFile.substr(0, inpFile.find(' '));
        inpFile = inpFile.substr(inpFile.find(' ')+1, string::npos);
        string part2 = inpFile.substr(0, inpFile.find(' '));
        string part3 = inpFile.substr(inpFile.find(' ')+1, string::npos);
        int numWordsWithAlpha = hasAlpha(part1) + hasAlpha(part2) + hasAlpha(part3);
        
        if(numWordsWithAlpha != 1){
            cout << "N\n";
        }else{
            if((!hasAlpha(part1) && part1[0] == '0') || (!hasAlpha(part2) && part2[0] == '0') || (!hasAlpha(part3) && part3[0] == '0')){
                cout << "N\n";
            }else if((hasAlpha(part1) && !hasAlpha(part2) && !hasAlpha(part3)) || (!hasAlpha(part1) && hasAlpha(part2) && !hasAlpha(part3)) || (!hasAlpha(part1) && !hasAlpha(part2) && hasAlpha(part3))){
                cout << "V\n";
            }else {
                cout << "N\n";
            }
        }
    }
}