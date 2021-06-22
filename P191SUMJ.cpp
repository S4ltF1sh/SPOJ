//P191SUMJ - Tam giác
//phuong trinh doan chan x/a + y/b = 1 voi a == b
//=>a == b == x + y
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long a, b, n, Max = -1000000;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a + b > Max)
            Max = a + b;
    }
    cout << Max;
}