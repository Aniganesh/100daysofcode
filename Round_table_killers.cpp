// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/round-table-killers-b7b93156/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, withTheGun, k;
    cin >> n >> k >> withTheGun;
    list<int> peopleList;
    for(int i = 1; i <= n; i++)
        peopleList.push_back(i);
    
    int toKill, i;
    int numRemaining = n;
    bool flag = false;
    
    while(numRemaining > 1){
        i = (withTheGun + 1) % (n+1);
        toKill = withTheGun % k;
        
        if(toKill == 0){
            withTheGun = (withTheGun + 1) % (n+1) ;
            flag = true;
        }
        // cout << withTheGun << " has to kill " << toKill << " people" << endl;
        if(toKill >= numRemaining){
            cout << withTheGun;
            return 0;
        }
        while(toKill){
            flag = false;    
            while(find(peopleList.begin(), peopleList.end(),i) == peopleList.end())
                i = (i + 1) % (n + 1);
            // cout << withTheGun << " Kills " << i << endl;
 
            peopleList.erase(find(peopleList.begin(), peopleList.end(),i));
            i = (i + 1) % (n+1);
            toKill--;
            numRemaining--;
            if(i == 0)
                i++;
        }
        
        while(find(peopleList.begin(), peopleList.end(),i) == peopleList.end())
                i = (i + 1) % (n + 1);
        if(!flag)
            withTheGun = i;
        // cout << withTheGun << " has the gun." << endl;
    }
    cout << withTheGun;
}