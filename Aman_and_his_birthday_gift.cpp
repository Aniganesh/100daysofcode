// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aman-and-his-birthday-gift-b5268b97/
// 27-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int startNum, diff, amanFav;
    cin >> startNum >> amanFav >> diff ;
    bool answered = false;

    for(int i = startNum; i <= amanFav; i+=diff){
        if(i == amanFav){
            cout << "YES\n";
            answered = true;
        // }else{
        //     cout << i << " ";
        }
    }

    if(!answered){
        cout << "NO\n";
    }
    return 0;
}