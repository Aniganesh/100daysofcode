// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/chessboard-and-dominos-3/
// 08-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

bool is_white(int x, int y){
    if(x%2){
        if(y % 2)
            return false;
        return true;
    }else{
        if(y % 2)
            return true;
        return false;
    }
}

bool isPossible(int x, char y, int a, char b){
    bool is_a_white = is_white(x, int(y-96));
    bool is_b_white = is_white(a, int (b-96));
    if(is_b_white == is_a_white)
        return false;
    return true;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int x, a;
        char y, b;
        cin >> x >> y;
        cin >> a >> b;
        
        if(isPossible(x,y,a,b)){
            cout << "YES\n";
        }else
            cout << "NO\n";
    }

    return 0;
}