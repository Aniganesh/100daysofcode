// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-old-monk/
// 26-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie();
    cout.tie();
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numElements;
        cin >> numElements;
        ll array1[numElements], array2[numElements];
        for(int i = 0; i < numElements; i++)
            cin >> array1[i];
        for(int i = 0; i < numElements; i++)
            cin >> array2[i];
        ll RES = 0;
        for(int i = 0; i < numElements; i++){
            int low = 0, high = numElements - 1, mid;
            int position = -1;
            while(low <= high){
                mid = (low + high) / 2;
                if(array2[mid] >= array1[i]){
                    position = mid;
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
            RES = max(RES, (ll) position - i);
        }
        cout << RES << endl;
    }
}