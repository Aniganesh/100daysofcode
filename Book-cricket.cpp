// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/bookcricket-bd707e2d/
// 16-05-2020 - Very-easy/easy
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;

int main(){
    int numTestcases;
    cin >> numTestcases;
    for(int i_test = 1; i_test <= numTestcases; ++i_test){
        int numOvers, numBatsmen;
        cin >> numOvers >> numBatsmen;
        string record;
        cin >> record;
        bool batsmanIsOut[11] = {false}, batsmanPlayed[11] = {false};
        int batsmanScore[11] = {0};
        int playing1 = 0, playing2 = 1, current = playing1, nextBatsman = 2;
        batsmanPlayed[0] = true, batsmanPlayed[1] = true;
        for(int i = 0; i < record.length(); ++i){
            if(record[i] == 'W'){
                batsmanIsOut[current] = true;
                batsmanPlayed[current] = true;
                if(current == playing1){
                    playing1 = nextBatsman++;
                    current = playing1;
                }
                else{
                    playing2 = nextBatsman++;
                    current = playing2;
                }
            }
            if(record[i]-48 == 1){
                ++batsmanScore[current];
                batsmanPlayed[current] = true;
                if(current == playing2){
                    current = playing1;
                }else if(current == playing1){
                    current = playing2;
                }
            }else if(record[i] - 48 < 10){
                batsmanPlayed[current] = true;
                batsmanScore[current] += (record[i] - 48);
            }
            // cout << current << " scored " << record[i] <<  endl;
            if(i%6 == 5){
                if(current == playing2){
                    current = playing1;
                }else if(current == playing1){
                    current = playing2;
                }
            }
        }
        cout << "Case " << i_test << ":\n";
        for(int i = 0; i < numBatsmen; ++i){
            if(batsmanPlayed[i]){
                cout << "Player " << i+1 << ": " << batsmanScore[i] << ((!batsmanIsOut[i])? "*": "") << endl;
            }else{
                cout << "Player " << i+1 << ": DNB\n";
            }
        }

    }
}
