// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/counting-triangles/
// 28-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    array<ll, 3> sides;
    map<array<ll, 3>,long > triangles;

    int numTriangles;
    cin >> numTriangles;
    while(numTriangles--){
        cin >> sides[0] >> sides[1] >> sides[2];
        sort(sides.begin(), sides.end());
        triangles[sides]++;
    }
    ll RES = 0;
    for(auto i = triangles.begin(); i != triangles.end(); i++){
        if(i->second == 1L)
            RES++;
    }
    cout << RES;
}