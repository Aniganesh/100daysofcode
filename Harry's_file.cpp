// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/find-the-name-if-you-can-61f601ad/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string fileNamePath;
    cin >> fileNamePath;
    string extension = fileNamePath.substr(fileNamePath.find_last_of('.') + 1);
    string fileName = fileNamePath.substr(fileNamePath.find_last_of('\\') + 1, fileNamePath.find_last_of('.')-(fileNamePath.find_last_of('\\')+1));
    string filePath = fileNamePath.substr(0, fileNamePath.find_last_of('\\')+1);
    cout << "Path: " << filePath << endl << "File name: " << fileName << endl;
    cout << "Extension: " << extension;
}
