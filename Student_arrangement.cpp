// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/student-arrangement-6/
// 23-04-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    
    int numRows, numStudents, capacity;
    cin >> numStudents >> numRows >> capacity;
    int preferred, didNotGetPreferred = 0;

    set<int> rowsAvailable;
    
    for(int i = 1; i <= numRows; i++)
        rowsAvailable.insert(i);
    
    int seatsOccupiedInRow[numRows+1] = {0};
    while(numStudents--){
        cin >> preferred;
        if(rowsAvailable.empty()){
            didNotGetPreferred += numStudents+1;
            break;
        }
        set<int>::iterator availableRow = rowsAvailable.lower_bound(preferred);
        if(availableRow == rowsAvailable.end())
            availableRow = rowsAvailable.begin();
            
        if(*availableRow != preferred)
            didNotGetPreferred++;
        seatsOccupiedInRow[*availableRow]++;
        if(seatsOccupiedInRow[*availableRow] == capacity)
            rowsAvailable.erase(availableRow);
    }
    cout << didNotGetPreferred;
}