// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/partitioning-bd4c9574/
// 09-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int N;
string B;
int C, P;
 
int convertToDecimal( string S ){
 
    int rv = 0;
    int e = 1;
    for(int i=S.length()-1;i>=0;i--){
        rv += e * bool( S[i] == '1' );
        e = e << 1;
    }
    return rv;
 
}
 
int main(){ ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
    cin >> C >> P;
    cin >> B;
    N = B.length();
 
    int _C = log2(C) + 1;
    int _P = log2(P) + 1;
 
    int RES = 0;
 
    for(int i=0;i<N;i++){
        for(int j=i+_C; j<=N && j-i<=25 ;j++){
            int _Cb = convertToDecimal( B.substr( i, j-i ) );
            if( _Cb > C ) break;
            if( _Cb != C ) continue;
            for(int k=j+_P; k<=N && k-j<=25 ;k++ ){
                int _Pb = convertToDecimal( B.substr( j, k-j ) );
                if( _Pb > P ) break;
                RES += bool( _Pb == P );
            }
        }
    }
 
    cout << RES << endl;
 
}