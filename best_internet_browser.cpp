// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-best-internet-browser-3/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int countVowels(string a){
    string vowels = "aeiou";
    int COUNT = 0;
    for(int i = 0; i < a.length(); i++){
        for(char j: vowels)
            if(j == a[i])
                COUNT++;
    }
    return COUNT;
}

int main(){

    int testcases;
    cin >> testcases;
    while(testcases--){
        string website;
        cin >> website;
        int start = website.find('.'), end = website.find(".com");
        string name = website.substr(start+1, end-start-1);
        int numvowels = countVowels(name);
        cout << name.length()-numvowels + 4 << '/' << website.length() << endl;
    }
}