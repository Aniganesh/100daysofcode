// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/very-cool-numbers/
// 03-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int count101(vector<int> bin){
    int COUNT = 0;
    for(vector<int>::iterator i = bin.begin(); i <= bin.end()-3; i++){
        if(*i == 1 && *(i + 1) == 0 && *(i + 2) == 1)
            COUNT++;
    }
    return COUNT;
}

vector<int> binaryRev(int decimal){
    vector<int> binary;
    while(decimal){
        binary.push_back(decimal%2);
        decimal /= 2;
    }
    return binary;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int numLimit, coolLimit, count = 0;
        cin >> numLimit >> coolLimit;
        for(int i = 1; i <= numLimit; i++){
            if(count101(binaryRev(i)) >= coolLimit)
                count++;
        }   
        cout << count << endl;
    }
}