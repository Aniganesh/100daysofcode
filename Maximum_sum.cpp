#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    ll numElements;
    cin >> numElements;
    ll elements[numElements];
    for(int i = 0; i < numElements; i++)
        cin >> elements[i];
    sort(elements, elements+numElements);
    ll maxSize = 1, maxSum = elements[numElements-1];
    for(int i = 0; i < numElements-1; i++){
        if(maxSum+elements[i] >= maxSum){
            maxSum+= elements[i];
            maxSize++;
        }
    }
    cout << maxSum << " " << maxSize;
}