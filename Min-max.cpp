// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/
// 21-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numNumbers;
    cin >> numNumbers;
    if(numNumbers == 1)
        cout << "0 0";
    else if (numNumbers == 2) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << min(num1, num2) << " " << max(num1, num2);
    }else{
        int numbers[numNumbers];
        for(int i = 0; i < numNumbers; i++)
            cin >> numbers[i];
        sort(numbers, numbers+numNumbers);
        cout << accumulate(numbers, numbers + numNumbers-1, 0) << " " << accumulate(numbers+1, numbers + numNumbers, 0);
    }
}