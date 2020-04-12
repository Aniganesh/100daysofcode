// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/sahils-computer-address-20/
// 12-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string ipaddress;
    cin >> ipaddress;
    if(ipaddress == "..." || ipaddress == "."|| ipaddress == ".." || ipaddress.length() > 15 || count(ipaddress.begin(), ipaddress.end(), '.') > 3 ){
        cout << "NO";
        return 0;
    }
    string part1 = ipaddress.substr(0, ipaddress.find('.'));

    ipaddress = ipaddress.substr(ipaddress.find('.')+1);
    string part2 = ipaddress.substr(0, ipaddress.find('.'));

    ipaddress = ipaddress.substr(ipaddress.find('.')+1);
    string part3 = ipaddress.substr(0, ipaddress.find('.'));

    ipaddress = ipaddress.substr(ipaddress.find('.')+1);
    try{
        if(stoi(part1) < 256 && stoi(part2) < 256 && stoi(part3) < 256 && stoi(ipaddress) < 256)
            cout << "YES";
        else
            cout << " NO";
    }catch(const std::exception& e){
        cout << "NO";
    }
}