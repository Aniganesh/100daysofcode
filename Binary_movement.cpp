// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/binary-movement/
// 29-04-2020 Medium
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    int numBits;
    scanf("%d", &numBits);
    int bits[numBits+2];
    for(int i = 1; i <= numBits; i++){
        scanf("%d", &bits[i]);
    }
    int numTimesFlipped[numBits+1] = {0};
    int numQueries;
    scanf("%d", &numQueries);
    
    while(numQueries--){
        int left, right;
        scanf("%d %d", &left, &right);
        numTimesFlipped[left] += 1;
        if(right < numBits)
            numTimesFlipped[right + 1] -= 1;
    }

    int count = 0;
    for(int i = 2; i <= numBits; i++){
        numTimesFlipped[i] += numTimesFlipped[i-1];
    }
    
    for(int i = 1; i <= numBits; i++){
        if(numTimesFlipped[i] & 1){
            bits[i] = 1 - bits[i];
        }
        if(bits[i] == 1)
            count++;
    }
    
    cout << count << endl;
    for(int i = 1; i <= numBits; i++)
        printf("%d ", bits[i]);
}
