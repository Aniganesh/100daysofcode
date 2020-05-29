// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/equal-median-8aba723b/
// 29-05-2020 Medium

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    
    while(numTestcases--){
        int numValues;
        cin >> numValues;
        
        int valArray1[numValues], valArray2[numValues];
        vector<int> vecToFindMedian;
        for(int i = 0; i < numValues; ++i){
            cin >> valArray1[i];
            vecToFindMedian.push_back(valArray1[i]);
        }

        for(int i = 0; i < numValues; ++i){
            cin >> valArray2[i];
            vecToFindMedian.push_back(valArray2[i]);
        }

        sort(valArray1, valArray1+numValues);
        sort(valArray2, valArray2+numValues);
        sort(vecToFindMedian.begin(), vecToFindMedian.end());
        
        if(vecToFindMedian[numValues] != vecToFindMedian[numValues-1]){
            cout << "-1\n";
            continue;
        }
        
        int median = vecToFindMedian[numValues/2];
        
        int numSwaps = find(valArray1, valArray1+numValues, median) != valArray1+numValues || find(valArray2, valArray2+numValues, median) != valArray2+numValues;

        int smallA = lower_bound(valArray1, valArray1+numValues, median) - valArray1;
        int smallB = lower_bound(valArray2, valArray2+numValues, median) - valArray2;

        int equalA = upper_bound(valArray1, valArray1+numValues, median) - lower_bound(valArray1, valArray1+numValues, median);
        int equalB = upper_bound(valArray2, valArray2+numValues, median) - lower_bound(valArray2, valArray2+numValues, median);
        int largeA = numValues - (upper_bound(valArray1, valArray1+numValues, median) - valArray1);
        int largeB = numValues - (upper_bound(valArray2, valArray2+numValues, median) - valArray2);

        int smallEqualA = smallA + equalA;
        int smallEqualB = smallB + equalB;
        int largeEqualA = largeA + equalA;
        int largeEqualB = largeB + equalB;

        int LMX = numValues/2 +1;
        int A2B = 0, B2A = 0;

        if(equalA == 0){
            B2A = 1;
            ++equalA;
            --equalB;
        }

        if(equalB == 0){
            A2B = 1;
            ++equalB;
            --equalA;
        }
        smallEqualA = smallA + equalA;
        smallEqualB = smallB + equalB;
        largeEqualA = largeA + equalA;
        largeEqualB = largeB + equalB;

           if(smallEqualA<LMX){
            int x = LMX - smallEqualA;
            B2A += x;
            smallEqualA += x;
            smallEqualB -= x;
        }
        if(smallEqualB<LMX){
            int x = LMX - smallEqualB;
            A2B += x;
            smallEqualA -= x;
            smallEqualB += x;
        }
        if(largeEqualA<LMX){
            int x = LMX - largeEqualA;
            B2A += x;
            largeEqualA += x;
            largeEqualB -= x;
        }
        if(largeEqualB<LMX){
            int x = LMX - largeEqualB;
            A2B += x;
            largeEqualA -= x;
            largeEqualB += x;
        }

        cout << min(B2A, A2B) << endl;
    }
}