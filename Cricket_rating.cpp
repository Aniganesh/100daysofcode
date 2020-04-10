// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cricket-rating-30/
// 10-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numMatches;
    cin >> numMatches;
    int rating, ratingSum = 0, tempSum = 0;

    for(int i = 1; i <= numMatches; i++){
        cin >> rating;
        if(tempSum <= 0){
            if(rating < 0)
                continue;
            tempSum = rating;
        }else{
            tempSum += rating;
        }
        ratingSum = max(tempSum, ratingSum);
    }
    
    cout << ratingSum;
}