// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/holi-and-colorful-houses-eb2049cb/
// 05-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int length, numQueries;
        cin >> length >> numQueries;
        string colourString;
        cin >> colourString;
        for(int j = 0; j < numQueries; j++){
            int start, end;
            cin >> start >> end;
            end--;start--;
            int ltor = 0, rtol = 0, i = start;
            while(i != end){
                if(colourString[i] != colourString[(i + 1) % length])
                    ltor++;
                i = (i + 1) % length;
            }
            i = start;
            while(i != end){
                if(i != 0){
                    if(colourString[i] != colourString[i-1])
                        rtol++;
                }else{
                    if(colourString[i] != colourString[length-1])
                        rtol++;
                }
                i--;
                if(i == -1)
                    i = length - 1;
            }
            cout << min(ltor, rtol) << endl;
        }
    }
}