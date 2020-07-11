// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/counting-the-subarrays-4187713a/
// 11-07-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    ll a[n+1], psum[n+1] = {0};

    vector<pair<int, int> > ans;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
    }

    for(int i = 1; i <= n; ++i){
        for(int j = i; j <= n; ++j){
            double cursum = psum[j] - psum[i-1];
            double curnum = j-i + 1;
            double remsum = psum[n] - cursum;
            double remnum = n - curnum;
            double curavg = cursum/curnum;
            double remavg;
            if(remnum == 0){
                remavg = 0;
            }else{
                remavg = remsum/remnum;
            }
            if(curavg > remavg){
                ans.push_back({i, j});
            }
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;

    for(pair<int, int> &i: ans){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}