// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/airfares-dbef7f12/
// 02-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long perTicket, seatsAvailable, seatLimit, hikedCost, reqTickets, totalCost;
    cin >> perTicket >> seatsAvailable >> seatLimit >> hikedCost >> reqTickets;
    if(reqTickets > (seatsAvailable - seatLimit)){
        totalCost = perTicket*(seatsAvailable-seatLimit);
        reqTickets -= seatsAvailable-seatLimit;
        totalCost += reqTickets*hikedCost;
    }else{
        totalCost = reqTickets * perTicket;
    }
    cout << totalCost;
}