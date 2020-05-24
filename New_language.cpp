// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/new-language-8c0781c4/
// 24-05-2020 Very-easy/easy

#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

template<typename T>
string NumberToString(T Number){
    stringstream ss;
    ss << Number;
    return ss.str();
}

ll StringToNumber(string str){
    stringstream sstr(str);
    ll val;
    sstr >> val;
    return val;
}

ll base9(ll n){
    ll ret = 0, p = 1;
    
    while(n != 0){
        ret += (n%9)*p;
        n /= 9;
        p *= 10;
    }

    return ret;
}

ll revertBase9(ll n){
    ll ret = 0, p = 0;
    
    while(n != 0){
        ret += (n%10)*pow(9,p++);
        n /= 10;
    }

    return ret;
}

ll fromNinjaLang(ll n){
    string s = NumberToString(n);

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '9')
            s[i] = '8';
    }
    
    n = StringToNumber(s);

    return revertBase9(n);
}

ll toNinja(ll n){
    n = base9(n);
    string s = NumberToString(n);

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '8')
            s[i] = '9';
    }

    return StringToNumber(s);
}

int main(){
    cin.tie(false);
    cout.tie(false);
    ios_base::sync_with_stdio(false);
    
    int numTestcases;
    cin >> numTestcases;
    while(numTestcases--){
        ll num1, num2;
        char Operator;
        cin >> num1 >> Operator >> num2;
        
        num1 = fromNinjaLang(num1);
        num2 = fromNinjaLang(num2);

        switch(Operator){
            case '*':
                cout << toNinja(num1*num2) << endl;
                break;
            case '/':
                cout << toNinja(num1/num2) << endl;
                break;
            case '-':
                cout << toNinja(num1-num2) << endl;
                break;
            case '+':
                cout << toNinja(num1+num2) << endl;
                break;
        }
    }
}