// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/mystery-20/
// 19-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    // The answer is to count the number of divisors of each number.
    int numTestcases;
    scanf("%d", &numTestcases);
    
    while(numTestcases--){
        int num;
        scanf("%d", &num);
        int numDivisors = 0;
        for(int i = 1; i*i <= num; ++i){
            if(num % i == 0){
                numDivisors += 2; 
            }
            // If i is a divisor, then the quotient is also a divisor
            if(i*i == num)
                --numDivisors;
            // If it is the square root, then the quotient and divisor are the same.
            // So we should increase numDivisors by 1 not 2. Since it has already been 
            // increased by 2, we decrease it by 1 here.
        }
        printf("%d\n", numDivisors);
    }
}