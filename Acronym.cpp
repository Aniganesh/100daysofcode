// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/acronym-2/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int numDislike, numWords;
    cin >> numDislike;
    vector<string> dislikes(numDislike);
    for(int i = 0; i < numDislike; i++)
        cin >> dislikes[i];
    
    cin >> numWords;
    string sentence[numWords];
    for(int i = 0; i < numWords; i++)
        cin >> sentence[i];
    vector<int> okay;
    for(int i = 0; i < numWords;i++)
        if(find(dislikes.begin(), dislikes.end(), sentence[i]) == dislikes.end())
            okay.push_back(i);
    for(int i = 0; i < okay.size()-1; i++)
        cout << (char)(sentence[okay[i]][0]-32) << ".";

    cout << (char)(sentence[okay[okay.size()-1]][0]-32);
}