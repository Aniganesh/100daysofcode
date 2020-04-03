// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-vowels-1-1da7c4d0/
// 03-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases, count;
    cin >> testcases;
    while(testcases--){
        string chocolate;
        cin >> chocolate;
        long long TASTE = 0, contribution;
        long long i, n = chocolate.length();
        for(i = 0; i < n; i++){
            char temp = tolower(chocolate[i]);
            if(temp == 'a' || temp == 'e'|| temp == 'i' || temp == 'o' || temp == 'u')
            TASTE += (i + 1) * (n - i);
        }
        cout << TASTE << endl;
    }
}