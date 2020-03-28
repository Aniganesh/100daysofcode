// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/one-string-no-trouble-37037871/
// 28-03-2020

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    long count = 0;
    for(auto i = s.begin(); i != s.end(); i++){
        long tempcount = 0;
        while((i+1) != s.end() && (*i != *(i+1)) ){
            i++;
            tempcount++;
        }
        if(*i != *(i-1))
            tempcount++;
        count = max(count, tempcount);
    }
    cout << count << endl;
}