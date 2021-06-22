//P172SUMJ - ROUND 2J - Leo cầu thang
//giai he phuong trinh:
//2a + b = n
// a + b = Run * m
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, m, Check = 0, Run = 1;
    cin >> n >> m;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    while (Run * m <= n)
    {
        int a = n - Run * m, b = 2 * Run * m - n;
        if (a >= 0 && b >= 0)
        {
            cout << a + b;
            return 0;
        }
        Run++;
    }
    cout << -1;
    return 0;
}