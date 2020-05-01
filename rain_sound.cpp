// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/rain-41f57695/
// 27-03-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long testcases;
    long long range_min, range_max, sound_per_cloud, min, max;
    cin >> testcases;
    while (testcases--)
    {
        cin >> range_min >> range_max >> sound_per_cloud;
        min = range_min % sound_per_cloud;
        if(min)
            min = (range_min + (sound_per_cloud - min))/sound_per_cloud;
        else
            min = range_min/sound_per_cloud;
        max = range_max / sound_per_cloud;
        if(range_min > range_max || max < min){
            min = -1;
            max = -1;
        }
        cout << min << " " << max << endl;
    }
}
