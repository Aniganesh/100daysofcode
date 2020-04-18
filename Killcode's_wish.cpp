// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/killcodes-wish-2/
// 18-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numchildren, maxAtaTime;
        cin >> numchildren >> maxAtaTime;
        vector<pair<int, int> > children(numchildren);
        for(int i = 0; i < numchildren; i++){
            cin >> children[i].first;
            children[i].second = i+1;
        }
        int i = 0;
        while(children.size() > 1){
            children[i].first -= maxAtaTime;
            if(children[i].first <= 0){
                children.erase(children.begin()+i);
                if(i == children.size())
                    i = 0; // Last child requirement fulfilled. Go to first child.
            }
            else
                i = (i+1) % children.size();
        }
        cout << children[0].second << endl;
    }
}