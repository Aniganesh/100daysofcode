// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/its-magic/
// 27-03-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

bool min(long long a, long long b){
    if(a < b)
        return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long num_ints;
    long long res = -1;
    cin >> num_ints;
    long long main_vec[num_ints];
    long long SUM = 0;
    for(int i = 0; i < num_ints; i++){
        cin >> main_vec[i];
        SUM += main_vec[i];
    }
    
    for(long long i = 0; i < num_ints; i++){
        if((SUM - main_vec[i]) % 7 == 0){
            if(res == -1){
                res = i;
            }else{
                if((main_vec[res] > main_vec[i]))
                    res = i;
            }
        }
    }
    cout << res;
}