//P181PROH - ROUND 1H - Ai thông minh hơn học sinh lớp 5
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
long long Count_Uoc(long long n, long long b)
{
    long long Count = 0;
    for (long long i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i > b)
                Count++;
            if (n / i > b)
                Count++;
        }
    }
    long long k = sqrt(n);
    if (k * k == n && k > b)
        Count++;
    return Count;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
        cout << "infinity";
    else if (a < b)
        cout << 0;
    else
        cout << Count_Uoc(a - b, b);
}