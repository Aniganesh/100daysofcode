// https://www.hackerearth.com/problem/algorithm/choose-from-two-arrays-eebbddf0-349fa1b7/
// 30-05-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numA, numB;
    cin >> numA >> numB;
    int a[numA], b[numB];
    int fromA, fromB;

    cin >> fromA >> fromB;
    
    for(int i = 0; i < numA; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < numB; ++i){
        cin >> b[i];
    }

    sort(a, a+numA);
    sort(b, b+numB);

    int minFromB = a[fromA-1];
    int* numBiggerThanMinFromB = upper_bound(b, b+numB, minFromB);
    if((b+numB - numBiggerThanMinFromB) >= fromB){
        cout << "YES";
    }else{
        cout << "NO";
    }

}