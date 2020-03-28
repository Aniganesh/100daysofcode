// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-great-kian/
// 28-03-2020 

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long sum1 = 0, sum2 = 0, sum3 = 0, size, num;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> num;
        if(i % 3 == 0)
            sum1 += num;
        else if(i % 3 == 1)
            sum2 += num;
        else if(i % 3 == 2)
            sum3 += num;
    }
    cout << sum1 << " " << sum2 << " " << sum3 << endl;

}