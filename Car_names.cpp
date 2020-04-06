// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/car-names-4/
// 06-04-2020 Very-easy/easy

#include<bits/stdc++.h>
#define ll long long
#define MOD % 1000000007

using namespace std;
bool greater_than_zero(int x){
            if(x>0)return true; return false;
        }

int main(){
    int numNames;
    cin >> numNames;
    while(numNames--){
        int repChars[5] = {0};
        string name;
        cin >> name;
        int numChars = 0, k = 0, count = 1;
        for(int i  = 1; i < name.size();i++){
            if(name[i] == name[i-1])count++;
            else{
                repChars[k++] = count;
                if(k > 3)break;
                 numChars++;count = 1;
            }
        }
        if(count >=1){
            repChars[k++] = count;
            numChars++;
        }
        if(numChars == 3 && repChars[0] == repChars[1] && repChars[1] == repChars[2] && name[0] != name[name.size()-1])
            cout << "OK" << endl;
        else
            cout << "Not OK" << endl;
    }
}