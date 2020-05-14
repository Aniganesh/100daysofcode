// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/
// 14-05-2020 Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numVaccines;
    cin >> numVaccines;
    int vaccineMidichlorian[numVaccines], patientMidichlorian[numVaccines];
    for(int i = 0; i < numVaccines; ++i){
        cin >> vaccineMidichlorian[i];
    }
    for(int i = 0; i < numVaccines; ++i){
        cin >> patientMidichlorian[i];
    }
    sort(vaccineMidichlorian, vaccineMidichlorian+numVaccines);
    sort(patientMidichlorian, patientMidichlorian+numVaccines);
    bool failed = false;
    for(int i = 0; i < numVaccines; ++i){
        if(patientMidichlorian[i] >= vaccineMidichlorian[i]){
            cout << "No"; failed = true; break;
        }
    }
    if(!failed)
        cout << "Yes";
}