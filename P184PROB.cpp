//P184PROB - ROUND 4B - Điểm gần nhất

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x.at(i);
    sort(x.begin(), x.end());
    if (n % 2 != 0)
        cout << x.at((n - 1) / 2);
    else
    {
        long long tmp1 = x.at(n / 2 - 1), tmp2 = x.at(n / 2), Sum1 = 0, Sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (x.at(i) > tmp1)
                Sum1 += (x.at(i) - tmp1);
            else if (x.at(i) < tmp1)
                Sum1 += (tmp1 - x.at(i));

            if (x.at(i) > tmp2)
                Sum2 += (x.at(i) - tmp2);
            else if (x.at(i) < tmp2)
                Sum2 += (tmp2 - x.at(i));
        }
        if (Sum2 < Sum1)
            cout << tmp2;
        else
            cout << tmp1;
    }
}
