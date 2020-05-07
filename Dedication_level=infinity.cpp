// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/baaki-che/
// 07-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numCoders;
    cin >> numCoders;
    vector<string> names(numCoders);
    vector<int> codingTime(numCoders);
    for(int i = 0; i < numCoders; ++i)
        cin >> names[i] >> codingTime[i];
    int Highest = max_element(codingTime.begin(), codingTime.end())-codingTime.begin();
    cout << names[Highest] << endl;
    codingTime.erase(max_element(codingTime.begin(), codingTime.end()));
    names.erase(find(names.begin(), names.end(), names[Highest]));
    Highest = max_element(codingTime.begin(), codingTime.end())-codingTime.begin();
    cout << names[Highest] << endl;
    codingTime.erase(max_element(codingTime.begin(), codingTime.end()));
    names.erase(find(names.begin(), names.end(), names[Highest]));
    Highest = max_element(codingTime.begin(), codingTime.end())-codingTime.begin();
    cout << names[Highest] << endl;
    return 0;   
}