// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/
// 27-03-2020 Very-easy/Easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    long min, num_ints, flag = 1, count = 0;
    cin >> num_ints;
    long a[num_ints], b[num_ints];
    cin >> a[0];
    min = a[0];
    for(int i = 1; i < num_ints; i++){
        cin >> a[i];
        if(min>a[i])
            min = a[i];
    }
    for(int i = 0; i < num_ints; i++)
        cin >> b[i];
    while(flag == 1){
        flag = 0;
        for(int i = 0; i < num_ints; i++){
            while(a[i] > min && b[i]!=0){
                a[i] -= b[i];
                count++;
                flag = 1;
            }
            if(a[i] < min)
                min = a[i];
            if(min < 0)
                break;
        }
        if(min < 0)
            break;
    }
    if(min < 0)
        cout << -1 << endl;
    else
        cout << count << endl;
    return 0;
}