// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/string-operations-1-cd102cb6/
// 05-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    char *mainString = new char[101];
    cin >> mainString;
    int swaps, changeIndex;
    char changeChar;
    cin >> swaps;
    while(swaps--){
        cin >> changeIndex >> changeChar;
        mainString[changeIndex-1] = changeChar;
    }
    int index1, index2, numReverses;
    string finalString(mainString);
    cin >> numReverses;
    while(numReverses--){
        cin >> index1 >> index2;
        reverse(finalString.begin()+index1-1, finalString.begin()+index2);
    }
    int count = 0;
    for(int i = 0; i < finalString.length(); i++)
        if(mainString[i] == finalString[i])
            count++;

    cout << mainString << endl << finalString << endl << count;
}