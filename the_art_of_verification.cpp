// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-art-of-verification/
// 07-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

int main(){
    string url;
    cin >> url;
    std::size_t qnIndex = url.find('?');
    url = url.substr(qnIndex);
    std::size_t usnIndex = url.find("=");
    std::size_t uend = url.find("&pwd");
    cout << "username: " << url.substr(usnIndex+1, uend - usnIndex - 1) << endl;
    url = url.substr(uend + 1);
    std::size_t pwdIndex = url.find("=");
    std::size_t pwdend = url.find("&profile");
    cout << "pwd: " << url.substr(pwdIndex+1, pwdend - pwdIndex -1)<< endl;
    url = url.substr(pwdend + 1);
    std::size_t profileIndex = url.find('=');
    std::size_t profend = url.find("&role");
    cout << "profile: " << url.substr(profileIndex+1,  profend - profileIndex - 1) << endl;
    url = url.substr(profend + 1);
    std::size_t roleIndex = url.find("=");
    std::size_t roleEnd = url.find("&key");
    cout << "role: " << url.substr(roleIndex+1, roleEnd - roleIndex - 1)<< endl;
    url = url.substr(roleEnd + 1);
    std::size_t keyIndex = url.find('=');
    cout << "key: " << url.substr(keyIndex + 1) << endl;
}