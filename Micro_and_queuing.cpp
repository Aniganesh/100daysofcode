// https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial/
// 07-06-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int numOperations;
    cin >> numOperations;
    queue<int> reqQ;
    
    while(numOperations--){
        char opCode;
        int element;
        cin >> opCode;
        
        if(opCode == 'E'){
            cin >> element;
            reqQ.push(element);
            cout << reqQ.size();
        }else{
            
            if(!reqQ.empty()){
                cout << reqQ.front() << " " << reqQ.size()-1;
                reqQ.pop();
            }else{
                cout << "-1 0";
            }
        
        }
        
        cout << endl;
    }
}