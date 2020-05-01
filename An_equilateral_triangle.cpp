// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mosalas-mostatilioo-f012275c/
// 02-04-2020 Very-easy/easy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
        count += (i * (i + 1) / 2) * ((n - i) / 2);
    /* At every row of the set of equilateral triangles, there are i*(i+1)/2 choices for length and (n-i)/2 choices for breadth (height).
        Multiply and keep accumulating to get total number of possible rectangles */
    cout << count;
}