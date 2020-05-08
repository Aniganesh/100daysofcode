// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/golf/distinct-count-2/
// 08-05-2020 Very-easy/easy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    map<int, int> f;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> b;
        f[b]++;
    }
    auto x = std::max_element(f.begin(), f.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });
    cout << x->first;
}