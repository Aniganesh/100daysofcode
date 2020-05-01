// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-upload-server-15bac95e/editorial/
// 14-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numTests;
    cin >> numTests;
    while(numTests--){
        int totalAmount;
        cin >> totalAmount;
        int count = 0;
        for(int x = 1; x <= totalAmount; x++){
            for(int y = 1; y <= totalAmount; y++){
                int partialsum = x+(3*y);
                if((totalAmount-partialsum) % 4 == 0 && (totalAmount-partialsum) > 0)
                    count++;                
            }
        }
        cout << count << endl;
    }
}