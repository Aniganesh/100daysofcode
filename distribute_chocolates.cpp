#include <bits/stdc++.h>

using namespace std;

long long sum_of_n_numbers(long long n)
{
    return ((2 + (n - 1)) * n) / 2;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long chocolates, students;
        cin >> chocolates >> students;
        long long nsum = sum_of_n_numbers(students);
        if (nsum > chocolates)
        {
            cout << chocolates << endl;
        }
        else
        {
            chocolates -= nsum;
            cout << chocolates % students << endl;
        }
    }
}


/* 
From editorial


Suppose the least intelligent student gets k chocolates then others will be getting (k +1), (k + 2), etc. So the sum of these chocolates will be

num_choc    = k + (k + 1) + (k + 2) + . . . . + (k + n - 1)

            = n * k + (1 + 2 + . . . . + n - 1)

            = n * k + n * (n - 1) / 2
extended as:
num_choc - (n*(n-1)/2) = n * k

This sum must be less than or equal to c. So we can find the maximum possible value of k and hence the remaining chocolates

 */