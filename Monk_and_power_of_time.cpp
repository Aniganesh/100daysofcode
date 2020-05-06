// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-power-of-time/
// 06-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTasks;
    cin >> numTasks;
    queue<int> callingOrder, idealOrder;
    int taskId;
    for(int i = 0; i < numTasks; i++){
        cin >> taskId;
        callingOrder.push(taskId);
    }
    for(int i = 0; i < numTasks; i++){
        cin >> taskId;
        idealOrder.push(taskId);
    }
    int time = 0;
    while(!idealOrder.empty()){
        if(callingOrder.front() == idealOrder.front()){
            idealOrder.pop();
            callingOrder.pop();
        }else{
            callingOrder.push(callingOrder.front());
            callingOrder.pop();
        }
        ++time;
    }
    cout << time;
}