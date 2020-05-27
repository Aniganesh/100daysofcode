// 
// 
#include<iostream>
#include<iomanip>
#define MOD % 1000000007
typedef long long ll;

using namespace std;


int givenFunc(int x, int y){
    if(x == 0)
        return (y+1) % 1000;
    if(x > 0 && y == 0)
        return givenFunc(x-1, 1) % 1000;
    return givenFunc(x-1, givenFunc(x, y-1));
}

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int x, y;
    cin >> x >> y;
    cout << setw(3) << setfill('0') << givenFunc(x,y);
}