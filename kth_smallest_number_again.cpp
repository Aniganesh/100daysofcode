// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/kth-smallest-number-again-2/
// 03-05-2020 Medium
#include<bits/stdc++.h>
#define MOD % 1000000007
typedef long long ll;

using namespace std;
vector<pair<ll, ll> > ranges, sumRanges;
int binarySearch(ll k){
    int RES = -1;
    int low = 0;
    int high = sumRanges.size();
    while(low <= high){
        int mid = (low + high) / 2;
        if(sumRanges[mid].second >= k){
            RES = mid;
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    return RES;
}

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        ranges.clear(), sumRanges.clear();
        int numRanges, numQueries;
        cin >> numRanges >> numQueries;
        for(int i = 0; i < numRanges; i++){
            ll lwrLimit, uprLimit;
            cin >> lwrLimit >> uprLimit;
            ranges.push_back({lwrLimit, uprLimit});
        }
        
        sort(ranges.begin(), ranges.end());
        // Store all ranges as pairs and sort as per lowerLimits of each range.
        
        ll lwrLimit, uprLimit = -(1e18+1);
        ll count = 0;
        for(int i = 0; i < numRanges; i++){
            // Remove overlapping ranges by comparing max of ranges (uprLimit) till now with lowerlimit (ranges[i].first) of current range.
            // If current range falls outside the range of the largest till now, count the number of values in that range and add it to the cumulative count (count)
            // value. Push the cumulative count value to sum ranges along with maximum of that range. Otherwise, if the range is completely inside another range, do nothing
            // If the range overlaps with the current max, count the difference between
            if(ranges[i].first > uprLimit){
                lwrLimit = ranges[i].first;
                uprLimit = ranges[i].second;
                count += uprLimit - lwrLimit + 1;
                sumRanges.push_back(make_pair(uprLimit, count));
            }
            else if(ranges[i].second <= uprLimit){

            }else {
                lwrLimit = uprLimit + 1;
                uprLimit = ranges[i].second;
                count += uprLimit - lwrLimit + 1;
                sumRanges.push_back(make_pair(uprLimit, count));
            }
        }
        while(numQueries--){
            ll kthSmallest;
            cin >> kthSmallest;
            if(sumRanges.back().second < kthSmallest){
                printf("-1\n");
                continue;
            }
            int index = binarySearch(kthSmallest);
            cout << sumRanges[index].first - sumRanges[index].second + kthSmallest << endl;
        }
    }
}