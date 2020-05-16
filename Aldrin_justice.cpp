// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/aldrin-justice/
// 16-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
   /* 
    ORIGINAL PROBLEM STATEMENT:
    You are given 4 points in X-axis only. Can be from -1000 to 1000 , b1 and b2 constitute 1     line and m1 and m2 constitute other line in X-axis. Now print "point" if b2 and m1            coincides, "Nothing" if the lines overlap , and "Line" if they form two seperate lines.
    It is not necessary that b1<=b2 and m1<=m2.
    */ 
    int numTests;
    cin >> numTests;
    while(numTests--){
        int marshallLineStart, marshallLineEnd, barneyLineStart, barneyLineEnd;
        cin >> marshallLineStart >> marshallLineEnd >> barneyLineStart >> barneyLineEnd;
        if(marshallLineEnd < marshallLineStart){
            swap(marshallLineEnd, marshallLineStart);
        }
        if(barneyLineEnd < barneyLineStart){
            swap(barneyLineEnd, barneyLineStart);
        }
        if(barneyLineEnd == marshallLineStart || marshallLineEnd == barneyLineStart  || (marshallLineStart == marshallLineEnd && marshallLineStart >= barneyLineStart && marshallLineStart <= barneyLineEnd) || (barneyLineEnd == barneyLineStart && marshallLineEnd >= barneyLineEnd && marshallLineStart <= barneyLineEnd)){
            cout << "Point\n";
        }else if((marshallLineStart <= barneyLineStart && barneyLineStart <= marshallLineEnd) || (barneyLineStart <= marshallLineStart && marshallLineStart <= barneyLineEnd)){
            cout << "Nothing\n";
        }else{
            cout << "Line\n";
        }
    }
}