// 
// 
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestCases;
    cin >> numTestCases; 
    while(numTestCases--){
        int numDays, plane1, plane2, plane3, success = 0;
        cin >> numDays >> plane1 >> plane2 >> plane3;
        int planesTakeOffThisDay[numDays+1] = {0};
        for(int i = plane1; i <= numDays; i+=plane1){
            planesTakeOffThisDay[i]++;
        }
        for(int i = plane2; i <= numDays; i+=plane2){
            planesTakeOffThisDay[i]++;
        }
        for(int i = plane3; i <= numDays; i+=plane3){
            planesTakeOffThisDay[i]++;
        }
        for(int i = 1; i < numDays+1; i++){
            if(planesTakeOffThisDay[i] == 1)
                success++;
        }
        cout << success << endl;
        /* Inefficient solution using set designed by me. */
        /* unordered_set<int> plane1TakeOff, plane2TakeOff, failedTakeOff, plane3Takeoff;
        for(int i = plane1; i <= numDays; i+=plane1){
            plane1TakeOff.insert(i);
        }
        for(int i = plane2; i <= numDays; i+=plane2){
            if(plane1TakeOff.find(i) == plane1TakeOff.end()){
                plane2TakeOff.insert(i);
            }else{
                failedTakeOff.insert(i);
                plane1TakeOff.erase(plane1TakeOff.find(i));
            }
        }
        for(int i = plane3; i <= numDays; i += plane3){
            bool failed = false;
            if(failedTakeOff.find(i) != failedTakeOff.end()){
                failed = true;
            }
            if(plane1TakeOff.find(i) != plane1TakeOff.end() ){
                plane1TakeOff.erase(plane1TakeOff.find(i));
                failed = true;
            }
            if(plane2TakeOff.find(i) != plane2TakeOff.end()){
                plane2TakeOff.erase(plane2TakeOff.find(i));
                failed = true;
            }
            if(!failed){
                plane3Takeoff.insert(i);
            }
        }
        
        cout << plane1TakeOff.size() + plane2TakeOff.size() + plane3Takeoff.size() << endl; */
    }
}