// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/pythagorean-triangles-0158a4c5/
// 01-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

bool isPrime(long long num){
    if(num == 1 || num == 0)
        return false;
    int i = 2;
    while(i <= (num / 2)+1){
        if(num % i == 0)
            return false;
        i++;
    }
    return true;
}

int main(){
    int num;
    long sum;
    cin >> num;
    int count = 0;
    int matrix[num][num];
    
    for(int i = 0; i < num; i++)
        for(int j = 0; j < num; j++)
            cin >> matrix[i][j];
    
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            sum = 0;
            int left = matrix[i-1][j], right = matrix[i+1][j], up = matrix[i][j-1], down = matrix[i][j+1];
            if(i == 0) left = 0;
            if(i == num-1) right = 0;
            if(j == 0) up = 0;
            if(j == num-1) down = 0;
            sum = left+right+up+down;
            if(isPrime(sum))
                count++;
        }
    }
    
    cout << count ;
}