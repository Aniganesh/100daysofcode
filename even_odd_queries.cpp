// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/even-odd-queries-f52d76e2/
// 08-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;


int main(){
    
    int testcases;
    scanf("%d", &testcases);

    while(testcases--){
        ll numElements, numQueries;
        scanf("%lld %lld", &numElements, &numQueries);
        ll mainArr[numElements+1], even[numElements+1], odd[numElements+1];
        odd[0] = 0;
        even[0] = 0;
        
        for(ll i = 1; i <= numElements; i++){
            scanf("%lld", &mainArr[i]);
            odd[i] = odd[i-1] + mainArr[i] % 2;
            if(mainArr[i] % 2){
                even[i] = even[i-1];
            }else{
                even[i] = even[i-1] + 1;
            }
        }

        for(long i = 0; i < numQueries; i++){
            int oddoreven;
            ll low, high;
            scanf("%d %lld %lld", &oddoreven, &low, &high);
            ll p, q;
            if(oddoreven){
                p = odd[high] - odd[low-1];
            }else{
                p = even[high] - even[low-1];
            }
            q = high - (low-1);
        
            ll factor = __gcd(p,q);
            p /= factor;
            q /= factor;
                    
            if(p == 0 || p == q)
                printf("%lld\n",p);
            else
                printf("%lld %lld\n", p, q);  
        }
    }
}
    
// Even cin and cout with fast I/O could not match scanf() and printf() speeds.