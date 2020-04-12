// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/milly-and-chocolates-ii-65198198/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>

#define MAXSIZE 443
using namespace std;

string solve(int N, int K, vector<int> p, vector<vector<string> > chocolates) {
    //write your code here
    //p[i] is the number of chocolates in ith room
    //chocolates[i][j] is the name of jth chocolate in ith room
    //return a string consisting of either "Yes" or "No"
    set<string> chocolateNames;
    for(int i = 0; i < chocolates.size();i++){
        for(int j = 0; j < chocolates[i].size(); j++){
            chocolateNames.insert(chocolates[i][j]);
        }
    }
    if(chocolateNames.size() > K)
        return "Yes";
    return "No";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++) {
        int N;
        cin >> N;
        int K;
        cin >> K;
        vector<int> p(MAXSIZE);
        vector<vector<string> > chocolates(MAXSIZE, vector<string>(MAXSIZE));
        for (int i = 0; i < N; i++) {
            cin >> p[i];
            for (int j = 0; j < p[i]; j++) {
                cin >> chocolates[i][j];
            }
        }
        string out_;
        out_ = solve(N, K, p, chocolates);
        cout << out_;
        cout << "\n";
    }
}