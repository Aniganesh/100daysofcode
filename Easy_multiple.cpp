// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/easy-multiple/
// 03-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        long long n, SUM, numPairs, numMultiples;
        cin >> n;

        numMultiples = ((n - 1) / 3);
        numPairs = numMultiples / 2;
        SUM = numPairs * (3 + (3 * numMultiples));
        if(numMultiples % 2 != 0)
            SUM += (3 + (3 * numMultiples))/2;
        
        numMultiples = (n - 1) / 5;
        numPairs = numMultiples / 2;
        SUM += numPairs * (5 + (5 * numMultiples));
        if(numMultiples % 2 != 0)
            SUM += (5 + (5 * numMultiples)) / 2;
        
        numMultiples = (n - 1) / 15;
        numPairs = numMultiples / 2;
        SUM -= numPairs * (15 + (15 * numMultiples));
        if(numMultiples % 2 != 0)
            SUM -= (15 + (15 * numMultiples))/2;
        cout << SUM << endl;
    }
}

// Help: https://www.answers.com/Q/What_is_the_sum_of_all_the_multiples_of_3_or_5_below_1000