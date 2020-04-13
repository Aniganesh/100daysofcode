// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mancunian-in-palindromia-3/
// 13-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;

bool isPalindrome(string a){
    for(int i = 0; i <= a.length()/2; i++){
        if(a[i] != a[a.length()-i-1])
            return false;
    }
    return true;
}

int main(){
    int numNames, throwaway;
    cin >> numNames >> throwaway;
    int numSuccess = 0;
    while(numNames--){
        string name;
        cin >> name;
        if(isPalindrome(name)){
            numSuccess++;
            continue;
        }
        int len = name.length();
        bool done = false;
        for(int i = 0; i < len; i++){
            for(int j = i; j < len; j++){
                string temp = name;
                reverse(temp.begin()+i, temp.begin()+j+1);
                if(isPalindrome(temp)){
                    done = true;
                    numSuccess++;
                    break;
                }
            }
            if(done)
                break;
        }
        if(!done)
        for(int i = 0; i < len; i++){
            for(int j = i; j < len; j++){
                for(int x = j+1; x < len; x++){
                    for(int y = x; y < len; y++){
                        string temp = name;
                        reverse(temp.begin()+i, temp.begin()+j+1);
                        reverse(temp.begin()+x, temp.begin()+y+1);
                        if(isPalindrome(temp)){
                            numSuccess++;
                            done = true;
                            break;
                        }

                    }
                    if(done)
                        break;
                }
                if(done)
                    break;
            }
            if(done)
                break;
        }
    }
    cout << numSuccess << endl;
}